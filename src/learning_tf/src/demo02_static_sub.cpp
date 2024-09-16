/*
	订阅发布的坐标系相对关系，生成一个相对于子级坐标系的坐标点数据，转换成父级坐标系中的坐标点
	将一个相对于子级坐标系（laser）的坐标点转换为相对于父级坐标系（base_link）的坐标点。这个过程是通过使用TF（Transform Framework）库来实现的，TF库用于处理坐标系之间的变换
	实现流程:
		1.包含头文件
		2.初始化 ROS 节点
		3.创建 TF 订阅节点
		4.生成一个坐标点(相对于子级坐标系)
		5.转换坐标点(相对于父级坐标系) 调用tf实现
		6.spin()
*/
// 1.包含头文件
#include "ros/ros.h"
#include "tf2_ros/transform_listener.h"
#include "tf2_ros/buffer.h"
#include "geometry_msgs/PointStamped.h"
#include "tf2_geometry_msgs/tf2_geometry_msgs.h" //注意: 调用 transform 必须包含该头文件

int main(int argc, char *argv[])
{
	setlocale(LC_ALL, "");
	// 2.初始化 ROS 节点
	ros::init(argc, argv, "static_sub");
	ros::NodeHandle nh;
	// 3.创建 TF 订阅节点
	tf2_ros::Buffer buffer;
	tf2_ros::TransformListener listener(buffer); // 监听TF变换
	ros::Rate r(1);
	while (ros::ok())
	{
		// 4.生成一个坐标点(相对于子级坐标系)
		geometry_msgs::PointStamped point_laser;
		point_laser.header.frame_id = "laser";
		point_laser.header.stamp = ros::Time::now();
		point_laser.point.x = 2.0;
		point_laser.point.y = 3.0;
		point_laser.point.z = 5.0;
		// 5.转换坐标点(相对于父级坐标系)
		// 新建一个坐标点，用于接收转换结果
		//--------------使用 try 语句或休眠，否则可能由于缓存接收延迟而导致坐标转换失败------------------------
		try
		{
			geometry_msgs::PointStamped point_base;
			// 输出的坐标点 = transform(被转换的坐标点,目标坐标系)
			point_base = buffer.transform(point_laser, "base_link");
			ROS_INFO("转换后的数据:(%.2f,%.2f,%.2f),参考的坐标系是: %s", point_base.point.x, point_base.point.y, point_base.point.z, point_base.header.frame_id.c_str());
		}
		catch (const std::exception &e)
		{
			ROS_INFO("程序异常.....%s", e.what());
		}

		r.sleep();
		ros::spinOnce();
	}

	return 0;
}