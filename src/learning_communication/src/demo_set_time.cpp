#include <ros/ros.h>

void doSomeThing(const ros::TimerEvent &event)
{
	ROS_INFO("-------------");
	ROS_INFO("event:%s", std::to_string(event.current_real.toSec()).c_str());
}

int main(int argc, char *argv[])
{
	setlocale(LC_ALL, "");

	ros::init(argc, argv, "hello_time");
	ros::NodeHandle nh;							  // 必须创建句柄，否则时间没有初始化，导致后续API调用失败
	ros::Time right_now = ros::Time::now();		  // 将当前时刻封装成对象
	ROS_INFO("当前时刻:%.2f", right_now.toSec()); // 获取距离 1970年01月01日 00:00:00 的秒数
	ROS_INFO("当前时刻:%d", right_now.sec);		  // 获取距离 1970年01月01日 00:00:00 的秒数

	ROS_INFO("当前时刻:%.2f", ros::Time::now().toSec());
	ros::Duration du(10); // 持续10秒钟,参数是double类型的，以秒为单位
	// du.sleep();							   // 按照指定的持续时间休眠
	ROS_INFO("持续时间:%.2f", du.toSec()); // 将持续时间换算成秒
	ROS_INFO("当前时刻:%.2f", ros::Time::now().toSec());

	ROS_INFO("时间运算");
	ros::Time now = ros::Time::now();
	ros::Duration du1(10);
	ros::Duration du2(20);
	ROS_INFO("当前时刻:%.2f", now.toSec());
	// 1.time 与 duration 运算
	ros::Time after_now = now + du1;
	ros::Time before_now = now - du1;
	ROS_INFO("当前时刻之后:%.2f", after_now.toSec());
	ROS_INFO("当前时刻之前:%.2f", before_now.toSec());

	// 2.duration 之间相互运算
	ros::Duration du3 = du1 + du2;
	ros::Duration du4 = du1 - du2;
	ROS_INFO("du3 = %.2f", du3.toSec());
	ROS_INFO("du4 = %.2f", du4.toSec());
	// PS: time 与 time 不可以运算
	//  ros::Time nn = now + before_now;//异常

	ros::Timer timer = nh.createTimer(ros::Duration(0.5), doSomeThing, false); // 只执行一次
	ros::spin();															   // 必须 spin
	return 0;
}
