#include "ros/ros.h"
#include "learning_communication/hello.h"

namespace hello_ns
{

	void HelloPub::run()
	{
		ROS_INFO("自定义头文件的使用....");
	}

}

int main(int argc, char *argv[])
{
	setlocale(LC_ALL, "");
	ros::init(argc, argv, "test_head_node");
	hello_ns::HelloPub helloPub; // 创建类对象
	helloPub.run();
	return 0;
}
