
#include <iostream>
#include <ros/ros.h>
#include <nav_msgs/OccupancyGrid.h>

int main(int argc, char **argv)
{
	ros::init(argc, argv, "demo_map_pub");

	ros::NodeHandle n;
	ros::Publisher pub = n.advertise<nav_msgs::OccupancyGrid>("/map", 10);

	ros::Rate r(1);
	while (ros::ok())
	{
		nav_msgs::OccupancyGrid msg;
		// header
		msg.header.frame_id = "map"; // 坐标系id
		msg.header.stamp = ros::Time::now();
		// 地图描述信息
		msg.info.origin.position.x = 0;
		msg.info.origin.position.y = 0;
		msg.info.resolution = 1.0;
		msg.info.width = 4;
		msg.info.height = 2;
		// 地图数据
		msg.data.resize(4 * 2);
		msg.data[0] = 100;
		msg.data[1] = 100;
		msg.data[2] = 0;
		msg.data[3] = -1;
		msg.data[4] = 100;
		msg.data[6] = 100;
		// 发送
		pub.publish(msg);
		r.sleep();
	}

	return 0;
}