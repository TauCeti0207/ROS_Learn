#!/usr/bin/env python
# -*- coding: utf-8 -*-

import rospy
import cv2
from cv_bridge import CvBridge, CvBridgeError
from sensor_msgs.msg import Image
import numpy as np
from math import *
from geometry_msgs.msg import Pose

BLUE_LOW   = 0
BLUE_HIGH  = 20
GREEN_LOW  = 20
GREEN_HIGH = 60
RED_LOW    = 80
RED_HIGH   = 150

class image_converter:
    def __init__(self):    
        # 创建cv_bridge，声明图像的发布者和订阅者
        self.image_pub = rospy.Publisher("object_detect_image", Image, queue_size=1)
        self.target_pub = rospy.Publisher("object_detect_pose", Pose, queue_size=1)
        self.bridge = CvBridge()
        self.image_sub = rospy.Subscriber("/camera/image_raw", Image, self.callback)

    def callback(self, data):
        """
        回调函数，处理接收到的图像数据。

        参数:
        - data: ROS图像消息。

        该函数首先将ROS图像消息转换为OpenCV图像格式，然后通过设定的颜色边界来识别图像中的对象。
        之后，函数将对象的位置和大小信息通过ROS话题发布。
        """
        # 使用cv_bridge将ROS的图像数据转换成OpenCV的图像格式
        try:
            cv_image = self.bridge.imgmsg_to_cv2(data, "bgr8")
        except CvBridgeError as e:
            print(e)

        # 定义BGR颜色边界
        boundaries = [([BLUE_LOW, GREEN_LOW, RED_LOW], [BLUE_HIGH, GREEN_HIGH, RED_HIGH])]

        # 遍历颜色边界
        for (lower, upper) in boundaries:
            # 创建NumPy数组以定义颜色边界
            lower = np.array(lower, dtype="uint8")
            upper = np.array(upper, dtype="uint8")

        # 在指定边界内查找颜色并应用掩码
        mask = cv2.inRange(cv_image, lower, upper)
        output = cv2.bitwise_and(cv_image, cv_image, mask=mask)

        # 转换为灰度图并转换为NumPy数组
        cvImg = cv2.cvtColor(output, cv2.COLOR_BGR2GRAY)
        npImg = np.asarray(cvImg)

        # 二值化处理
        thresh = cv2.threshold(npImg, 1, 255, cv2.THRESH_BINARY)[1]

        # 在二值化图像中查找轮廓
        cnts, hierarchy = cv2.findContours(thresh, cv2.RETR_LIST, cv2.CHAIN_APPROX_SIMPLE)

        # 遍历轮廓
        for c in cnts:
            # 计算轮廓的中心
            M = cv2.moments(c)

            # 过滤掉面积不在指定范围内的轮廓
            if int(M["m00"]) not in range(20000, 250000):
                continue

            cX = int(M["m10"] / M["m00"])
            cY = int(M["m01"] / M["m00"])

            # 绘制轮廓和中心点
            cv2.drawContours(cv_image, [c], -1, (0, 0, 255), 2)
            cv2.circle(cv_image, (cX, cY), 1, (0, 0, 255), -1)

            # 创建并发布对象姿态消息
            objPose = Pose()
            objPose.position.x = cX
            objPose.position.y = cY
            objPose.position.z = M["m00"]
            self.target_pub.publish(objPose)

        # 显示Opencv格式的图像
        # cv2.imshow("Image window", cv_image)
        # cv2.waitKey(3)

        # 将OpenCV图像转换为ROS图像消息并发布
        try:
            self.image_pub.publish(self.bridge.cv2_to_imgmsg(cv_image, "bgr8"))
        except CvBridgeError as e:
            print(e)

if __name__ == '__main__':
    try:
        # 初始化ros节点
        rospy.init_node("object_detect")
        rospy.loginfo("Starting detect object")
        image_converter()
        rospy.spin()
    except KeyboardInterrupt:
        rospy.loginfo("Shutting down object_detect node.")
        cv2.destroyAllWindows()
