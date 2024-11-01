#include <ros/ros.h>
#include <std_msgs/String.h>

// 添加一个状态机来跟踪当前的导航点
enum NavPoint
{
	POINT_1,
	POINT_2,
	POINT_3,
	POINT_4,
	DONE
};

NavPoint current_point = POINT_1;
ros::Publisher nav_pub;
std_msgs::String nav_msg;

void NavResultCallback(const std_msgs::String &msg)
{
	ROS_WARN("[NavResultCallback] %s", msg.data.c_str());
	if (msg.data == "done")
	{
		switch (current_point)
		{
		case POINT_1:
			nav_msg.data = "2";
			nav_pub.publish(nav_msg);
			current_point = POINT_2;
			break;
		case POINT_2:
			nav_msg.data = "3";
			nav_pub.publish(nav_msg);
			current_point = POINT_3;
			break;
		case POINT_3:
			nav_msg.data = "4";
			nav_pub.publish(nav_msg);
			current_point = POINT_4;
			break;
		case POINT_4:
			// 所有点都已经导航完毕
			current_point = DONE;
			break;
		default:
			break;
		}
	}
}

int main(int argc, char **argv)
{
	ros::init(argc, argv, "wp_node");

	ros::NodeHandle n;
	// 发布导航目标航点
	nav_pub = n.advertise<std_msgs::String>("/waterplus/navi_waypoint", 10);
	// 接收导航结果
	ros::Subscriber res_sub = n.subscribe("/waterplus/navi_result", 10, NavResultCallback);
	sleep(1);
	// 初始化发布第一个导航点
	nav_msg.data = "1";
	nav_pub.publish(nav_msg);

	ros::spin();

	return 0;
}