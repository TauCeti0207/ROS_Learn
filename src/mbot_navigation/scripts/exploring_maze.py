#!/usr/bin/env python 
# -*- coding: utf-8 -*-
 
import roslib;
import rospy  
import actionlib  
import random
from actionlib_msgs.msg import *  
from geometry_msgs.msg import Pose, PoseWithCovarianceStamped, Point, Quaternion, Twist  
from move_base_msgs.msg import MoveBaseAction, MoveBaseGoal  
from std_msgs.msg import Int8

STATUS_EXPLORING    = 0
STATUS_CLOSE_TARGET = 1
STATUS_GO_HOME      = 2

class ExploringMaze():
    def __init__(self):  
        rospy.init_node('exploring_maze', anonymous=True)  
        rospy.on_shutdown(self.shutdown) #回调函数 

        # 在每个目标位置暂停的时间 (单位：s)
        self.rest_time = rospy.get_param("~rest_time", 0.5)  

        # 发布控制机器人的消息  
        self.cmd_vel_pub = rospy.Publisher('cmd_vel', Twist, queue_size=5) 
 
        # 创建一个Subscriber，订阅/exploring_cmd
        rospy.Subscriber("/exploring_cmd", Int8, self.cmdCallback)

        # 订阅move_base服务器的消息  
        self.move_base = actionlib.SimpleActionClient("move_base", MoveBaseAction)  

        rospy.loginfo("Waiting for move_base action server...")  
        
        # 60s等待时间限制  
        self.move_base.wait_for_server(rospy.Duration(60))  
        rospy.loginfo("Connected to move base server")  
 
        # 保存运行时间的变量   
        self.start_time = rospy.Time.now()  
        running_time = 0  

        rospy.loginfo("Starting exploring maze")  
        
        # 初始位置
        start_location = Pose(Point(0, 0, 0), Quaternion(0.000, 0.000, 0.709016873598, 0.705191515089))  
 
        # 命令初值
        self.exploring_cmd = 0
       
        # 开始主循环，随机导航  
        while not rospy.is_shutdown():
		    # 设定下一个随机目标点
            self.goal = MoveBaseGoal()
            self.goal.target_pose.pose = start_location
            self.goal.target_pose.header.frame_id = 'map'
            self.goal.target_pose.header.stamp = rospy.Time.now()
			
			# 随机产生一个导航目标点进行寻宝 地图10*10m
            if self.exploring_cmd is STATUS_EXPLORING:
                self.goal.target_pose.pose.position.x = random.randint(0, 8)
                self.goal.target_pose.pose.position.y = random.randint(0, 9)
            # 暂停0.1秒并继续下一次循环
            elif self.exploring_cmd is STATUS_CLOSE_TARGET:
                rospy.sleep(0.1)
                continue
            # 目标点设置为原点
            elif self.exploring_cmd is STATUS_GO_HOME:
                self.goal.target_pose.pose.position.x = 0
                self.goal.target_pose.pose.position.y = 0

            #让用户知道下一个位置
            rospy.loginfo("Going to: " + str(self.goal.target_pose.pose))

            #向下一个位置进发
            self.move_base.send_goal(self.goal)

            # 五分钟时间限制
            finished_within_time = self.move_base.wait_for_result(rospy.Duration(300))

            # 查看是否成功到达
            if not finished_within_time:
                self.move_base.cancel_goal()
                rospy.loginfo("Timed out achieving goal")
            else:
                state = self.move_base.get_state()
                if state == GoalStatus.SUCCEEDED:
                    rospy.loginfo("Goal succeeded!")
                else:
                    rospy.loginfo("Goal failed!")

            # 运行所用时间
            running_time = rospy.Time.now() - self.start_time
            running_time = running_time.secs / 60.0

            # 输出本次导航的所有信息
            rospy.loginfo("Current time: " + str(round(running_time, 1)) + " min")
        self.shutdown()

    def cmdCallback(self, msg):
        rospy.loginfo("Receive exploring cmd : %d", msg.data)
        self.exploring_cmd = msg.data

        if self.exploring_cmd is STATUS_CLOSE_TARGET:
            rospy.loginfo("Stopping the robot...")  
            self.move_base.cancel_goal() 

    def shutdown(self):  
        rospy.loginfo("Stopping the robot...")  
        self.move_base.cancel_goal()  
        rospy.sleep(2)  
        self.cmd_vel_pub.publish(Twist())
        rospy.sleep(1)  

def trunc(f, n):
    """
    截断小数点后位数至指定精度。

    该函数将浮点数 f 的小数部分截断至 n 位。与四舍五入不同，
    这个函数直接移除掉多余的小数位，而不进行任何舍入处理。

    参数:
    f: 浮点数，需要进行截断操作的数字。
    n: 整数，指定保留的小数位数。

    返回:
    浮点数，经过截断后的新值。
    """
    # 计算指定精度下数字的长度
    slen = len('%.*f' % (n, f))
    # 通过字符串截取实现截断，并转换回浮点数
    return float(str(f)[:slen])

if __name__ == '__main__':  
    try:  
        ExploringMaze()  
        rospy.spin()  

    except rospy.ROSInterruptException:  
        rospy.loginfo("Exploring maze finished.")
