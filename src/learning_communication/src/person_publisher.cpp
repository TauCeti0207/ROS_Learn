/**
 * 该例程将发布/person_info话题，learning_communication::PersonMsg
 */

#include <ros/ros.h>
#include "learning_communication/PersonMsg.h"

int main(int argc, char **argv)
{
	setlocale(LC_ALL, "");

	// ROS节点初始化
	ros::init(argc, argv, "person_publisher");

	// 创建节点句柄
	ros::NodeHandle n;

	// 创建一个Publisher，发布名为/person_info的topic，消息类型为learning_communication::PersonMsg，队列长度10
	ros::Publisher person_info_pub = n.advertise<learning_communication::PersonMsg>("/person_info", 10);
	// 设置循环的频率
	ros::Rate loop_rate(1);

	int count = 0;
	while (ros::ok())
	{
		// 初始化learning_communication::Person类型的消息
		learning_communication::PersonMsg person_msg;
		person_msg.name = "Tom";
		person_msg.age = 18;
		person_msg.sex = learning_communication::PersonMsg::male;

		// 发布消息
		person_info_pub.publish(person_msg);

		ROS_INFO("Publish Person Info: name:%s  age:%d  sex:%d",
				 person_msg.name.c_str(), person_msg.age, person_msg.sex);

		// 按照循环频率延时
		loop_rate.sleep();

		// 暂无应用，官方建议加上
		ros::spinOnce();
	}

	return 0;
}
