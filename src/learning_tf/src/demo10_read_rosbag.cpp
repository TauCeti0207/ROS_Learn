/*
	读取 bag 文件：

*/
#include "ros/ros.h"
#include "rosbag/bag.h"
#include "rosbag/view.h"
#include "std_msgs/String.h"
#include "std_msgs/Int32.h"

int main(int argc, char *argv[])
{

	setlocale(LC_ALL, "");

	ros::init(argc, argv, "bag_read");
	ros::NodeHandle nh;

	// 创建 bag 对象
	rosbag::Bag bag;
	// 打开 bag 文件
	bag.open("/home/yzq0207/catkin_ws/src/learning_tf/bag/hello.bag", rosbag::BagMode::Read);
	// 读数据 先获取消息的集合，再迭代取出数据

	for (rosbag::MessageInstance const m : rosbag::View(bag))
	{
		std::string topic = m.getTopic();
		ros::Time time = m.getTime();
		std_msgs::String::ConstPtr p = m.instantiate<std_msgs::String>();
		if (p != nullptr)
		{
			ROS_INFO("解析的话题：%s，时间戳：%.2f，读取的数据：%s", topic.c_str(), time.toSec(), p->data.c_str());
		}
	}
	// 关闭文件流
	bag.close();
	return 0;
}
