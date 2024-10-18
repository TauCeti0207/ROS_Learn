// Generated by gencpp from file loop_action/KeyFrameHandleActionGoal.msg
// DO NOT EDIT!


#ifndef LOOP_ACTION_MESSAGE_KEYFRAMEHANDLEACTIONGOAL_H
#define LOOP_ACTION_MESSAGE_KEYFRAMEHANDLEACTIONGOAL_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <actionlib_msgs/GoalID.h>
#include <loop_action/KeyFrameHandleGoal.h>

namespace loop_action
{
template <class ContainerAllocator>
struct KeyFrameHandleActionGoal_
{
  typedef KeyFrameHandleActionGoal_<ContainerAllocator> Type;

  KeyFrameHandleActionGoal_()
    : header()
    , goal_id()
    , goal()  {
    }
  KeyFrameHandleActionGoal_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , goal_id(_alloc)
    , goal(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef  ::actionlib_msgs::GoalID_<ContainerAllocator>  _goal_id_type;
  _goal_id_type goal_id;

   typedef  ::loop_action::KeyFrameHandleGoal_<ContainerAllocator>  _goal_type;
  _goal_type goal;





  typedef boost::shared_ptr< ::loop_action::KeyFrameHandleActionGoal_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::loop_action::KeyFrameHandleActionGoal_<ContainerAllocator> const> ConstPtr;

}; // struct KeyFrameHandleActionGoal_

typedef ::loop_action::KeyFrameHandleActionGoal_<std::allocator<void> > KeyFrameHandleActionGoal;

typedef boost::shared_ptr< ::loop_action::KeyFrameHandleActionGoal > KeyFrameHandleActionGoalPtr;
typedef boost::shared_ptr< ::loop_action::KeyFrameHandleActionGoal const> KeyFrameHandleActionGoalConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::loop_action::KeyFrameHandleActionGoal_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::loop_action::KeyFrameHandleActionGoal_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::loop_action::KeyFrameHandleActionGoal_<ContainerAllocator1> & lhs, const ::loop_action::KeyFrameHandleActionGoal_<ContainerAllocator2> & rhs)
{
  return lhs.header == rhs.header &&
    lhs.goal_id == rhs.goal_id &&
    lhs.goal == rhs.goal;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::loop_action::KeyFrameHandleActionGoal_<ContainerAllocator1> & lhs, const ::loop_action::KeyFrameHandleActionGoal_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace loop_action

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::loop_action::KeyFrameHandleActionGoal_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::loop_action::KeyFrameHandleActionGoal_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::loop_action::KeyFrameHandleActionGoal_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::loop_action::KeyFrameHandleActionGoal_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::loop_action::KeyFrameHandleActionGoal_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::loop_action::KeyFrameHandleActionGoal_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::loop_action::KeyFrameHandleActionGoal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "90c83dfe3c7162c2196063ccea6aa80e";
  }

  static const char* value(const ::loop_action::KeyFrameHandleActionGoal_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x90c83dfe3c7162c2ULL;
  static const uint64_t static_value2 = 0x196063ccea6aa80eULL;
};

template<class ContainerAllocator>
struct DataType< ::loop_action::KeyFrameHandleActionGoal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "loop_action/KeyFrameHandleActionGoal";
  }

  static const char* value(const ::loop_action::KeyFrameHandleActionGoal_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::loop_action::KeyFrameHandleActionGoal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n"
"\n"
"Header header\n"
"actionlib_msgs/GoalID goal_id\n"
"KeyFrameHandleGoal goal\n"
"\n"
"================================================================================\n"
"MSG: std_msgs/Header\n"
"# Standard metadata for higher-level stamped data types.\n"
"# This is generally used to communicate timestamped data \n"
"# in a particular coordinate frame.\n"
"# \n"
"# sequence ID: consecutively increasing ID \n"
"uint32 seq\n"
"#Two-integer timestamp that is expressed as:\n"
"# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n"
"# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n"
"# time-handling sugar is provided by the client library\n"
"time stamp\n"
"#Frame this data is associated with\n"
"string frame_id\n"
"\n"
"================================================================================\n"
"MSG: actionlib_msgs/GoalID\n"
"# The stamp should store the time at which this goal was requested.\n"
"# It is used by an action server when it tries to preempt all\n"
"# goals that were requested before a certain time\n"
"time stamp\n"
"\n"
"# The id provides a way to associate feedback and\n"
"# result message with specific goal requests. The id\n"
"# specified must be unique.\n"
"string id\n"
"\n"
"\n"
"================================================================================\n"
"MSG: loop_action/KeyFrameHandleGoal\n"
"# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n"
"# Define the goal\n"
"uint32 function  # 1 for add keyframe, 2 for save map keyframe\n"
;
  }

  static const char* value(const ::loop_action::KeyFrameHandleActionGoal_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::loop_action::KeyFrameHandleActionGoal_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.goal_id);
      stream.next(m.goal);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct KeyFrameHandleActionGoal_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::loop_action::KeyFrameHandleActionGoal_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::loop_action::KeyFrameHandleActionGoal_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "goal_id: ";
    s << std::endl;
    Printer< ::actionlib_msgs::GoalID_<ContainerAllocator> >::stream(s, indent + "  ", v.goal_id);
    s << indent << "goal: ";
    s << std::endl;
    Printer< ::loop_action::KeyFrameHandleGoal_<ContainerAllocator> >::stream(s, indent + "  ", v.goal);
  }
};

} // namespace message_operations
} // namespace ros

#endif // LOOP_ACTION_MESSAGE_KEYFRAMEHANDLEACTIONGOAL_H