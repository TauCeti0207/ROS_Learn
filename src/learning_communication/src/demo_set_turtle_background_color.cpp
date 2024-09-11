/*
	注意命名空间的使用。

*/
#include "ros/ros.h"

int main(int argc, char *argv[])
{
	ros::init(argc, argv, "haha", ros::init_options::AnonymousName);

	ros::NodeHandle nh("turtlesim");
	// ros::NodeHandle nh;

	//	不需要创建nh
	// ros::param::set("/turtlesim/background_r",0);
	// ros::param::set("/turtlesim/background_g",0);
	// ros::param::set("/turtlesim/background_b",0);

	nh.setParam("background_r", 0);
	nh.setParam("background_g", 0);
	nh.setParam("background_b", 0);

	return 0;
}
