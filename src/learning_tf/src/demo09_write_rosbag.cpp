/*
 * @Descripttion:
 * @Author: tauceti0207
 * @version:
 * @Date: 2024-09-14 18:56:08
 * @LastEditors: tauceti0207
 * @LastEditTime: 2024-09-14 19:03:32
 */
#include "ros/ros.h"
#include "rosbag/bag.h"
#include "std_msgs/String.h"

int main(int argc, char *argv[])
{
	ros::init(argc, argv, "bag_write");
	ros::NodeHandle nh;
	// 创建bag对象
	rosbag::Bag bag;
	// 打开
	bag.open("/home/yzq0207/catkin_ws/src/learning_tf/bag/hello.bag", rosbag::BagMode::Write);
	// 写
	std_msgs::String msg;
	msg.data = "hello world";
	bag.write("/chatter", ros::Time::now(), msg);
	bag.write("/chatter", ros::Time::now(), msg);
	bag.write("/chatter", ros::Time::now(), msg);
	bag.write("/chatter", ros::Time::now(), msg);
	// 关闭
	bag.close();

	return 0;
}