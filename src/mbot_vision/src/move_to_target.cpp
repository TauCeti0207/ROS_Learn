#include <math.h>

#include <ros/ros.h>
#include <geometry_msgs/Twist.h>
#include <geometry_msgs/Pose.h>
#include <std_msgs/Int8.h>
#include <std_msgs/String.h>
#include <cmath> // 引入cmath库以使用fabs函数

#define STATUS_EXPLORING (0)
#define STATUS_CLOSE_TARGET (1) // 靠近宝藏状态
#define STATUS_GO_HOME (2)
#define STATUS_TASK_COMPLETED (3) // 新增状态：任务完成

#define GET_TARGET_SIZE (90000)

ros::Publisher vel_pub;
ros::Publisher cmd_pub;
ros::Publisher voice_pub;

int status_flag = STATUS_EXPLORING;
// 声明并定义 home_pose 变量
geometry_msgs::Pose home_pose;

void initialize_home_pose()
{
    home_pose.position.x = 0.0;
    home_pose.position.y = 0.0;
    home_pose.position.z = 0.0;
    home_pose.orientation.x = 0.000;
    home_pose.orientation.y = 0.000;
    home_pose.orientation.z = 0.709016873598;
    home_pose.orientation.w = 0.705191515089;
}

// 接收到订阅的消息后，会进入消息回调函数
void poseCallback(const geometry_msgs::Pose::ConstPtr &msg)
{
    // 将接收到的消息打印出来
    ROS_INFO("Target pose: x:%0.6f, y:%0.6f, z:%0.6f", msg->position.x, msg->position.y, msg->position.z);

    /******************************请补充此处代码（开始）*******************************************/
    // 停止机器人导航
    if (status_flag == STATUS_EXPLORING)
    {
        status_flag = STATUS_CLOSE_TARGET;
        std_msgs::Int8 cmd;
        cmd.data = STATUS_CLOSE_TARGET;
        cmd_pub.publish(cmd);

        std_msgs::String msg;
        msg.data = "发现宝藏，向宝藏进发";
        voice_pub.publish(msg);
    }
    else if (status_flag == STATUS_CLOSE_TARGET && msg->position.z > GET_TARGET_SIZE)
    {
        status_flag = STATUS_GO_HOME;
        std_msgs::Int8 cmd;
        cmd.data = STATUS_GO_HOME;
        cmd_pub.publish(cmd);

        std_msgs::String msg;
        msg.data = "拿到宝藏，撤退";
        voice_pub.publish(msg);
    }
    else if (status_flag == STATUS_CLOSE_TARGET)
    {
        // 检查消息是否为空
        if (msg == nullptr)
        {
            ROS_ERROR("Received null pose message");
            return;
        }

        // 初始化geometry msgs::Twist类型的消息
        geometry_msgs::Twist vel_msg;
        vel_msg.linear.x = (100000 - msg->position.z) / 100000 * 0.3;
        vel_msg.angular.z = (640 - msg->position.x) / 640 * 0.3;

        // 发布消息
        vel_pub.publish(vel_msg);
        ROS_INFO("Publish velocity command[%.2f m/s, %.2f rad/s]", vel_msg.linear.x, vel_msg.angular.z);
    }

    // else if (status_flag == STATUS_GO_HOME)
    // {
    //     // 定义一个小的阈值，用于判断浮点数是否“几乎”相等
    //     const double EPSILON = 0.01; // 你可以根据实际情况调整这个值

    //     // 检查机器人是否回到了Home的位置（允许一定的误差）
    //     if (fabs(msg->position.x - home_pose.position.x) < EPSILON &&
    //         fabs(msg->position.y - home_pose.position.y) < EPSILON &&
    //         fabs(msg->position.z - home_pose.position.z) < EPSILON)
    //     {
    //         status_flag = STATUS_TASK_COMPLETED;
    //         std_msgs::String msg;
    //         msg.data = "寻宝任务完成";
    //         voice_pub.publish(msg);
    //     }
    // }
}

int main(int argc, char **argv)
{
    // ROS节点初始化
    ros::init(argc, argv, "move_to_target");

    // 创建节点句柄
    ros::NodeHandle n;
    initialize_home_pose();
    // 创建一个Subscriber，订阅名为/turtle1/pose的topic，注册回调函数poseCallback
    ros::Subscriber pose_sub = n.subscribe("/object_detect_pose", 10, poseCallback);
    // 创建一个Publisher，发布名为cmd_vel的topic，消息类型为geometry_msgs::Twist，队列长度10
    vel_pub = n.advertise<geometry_msgs::Twist>("/cmd_vel", 10);
    // 创建一个Publisher，发布名为cmd_vel的topic，消息类型为std_msgs::Int8，队列长度10
    cmd_pub = n.advertise<std_msgs::Int8>("/exploring_cmd", 10);
    // 发布语音输出内容
    voice_pub = n.advertise<std_msgs::String>("voiceWords", 1000);

    // 循环等待回调函数
    ros::spin();

    return 0;
}
