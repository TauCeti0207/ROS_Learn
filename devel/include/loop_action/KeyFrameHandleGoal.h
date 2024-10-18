// Generated by gencpp from file loop_action/KeyFrameHandleGoal.msg
// DO NOT EDIT!


#ifndef LOOP_ACTION_MESSAGE_KEYFRAMEHANDLEGOAL_H
#define LOOP_ACTION_MESSAGE_KEYFRAMEHANDLEGOAL_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace loop_action
{
template <class ContainerAllocator>
struct KeyFrameHandleGoal_
{
  typedef KeyFrameHandleGoal_<ContainerAllocator> Type;

  KeyFrameHandleGoal_()
    : function(0)  {
    }
  KeyFrameHandleGoal_(const ContainerAllocator& _alloc)
    : function(0)  {
  (void)_alloc;
    }



   typedef uint32_t _function_type;
  _function_type function;





  typedef boost::shared_ptr< ::loop_action::KeyFrameHandleGoal_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::loop_action::KeyFrameHandleGoal_<ContainerAllocator> const> ConstPtr;

}; // struct KeyFrameHandleGoal_

typedef ::loop_action::KeyFrameHandleGoal_<std::allocator<void> > KeyFrameHandleGoal;

typedef boost::shared_ptr< ::loop_action::KeyFrameHandleGoal > KeyFrameHandleGoalPtr;
typedef boost::shared_ptr< ::loop_action::KeyFrameHandleGoal const> KeyFrameHandleGoalConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::loop_action::KeyFrameHandleGoal_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::loop_action::KeyFrameHandleGoal_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::loop_action::KeyFrameHandleGoal_<ContainerAllocator1> & lhs, const ::loop_action::KeyFrameHandleGoal_<ContainerAllocator2> & rhs)
{
  return lhs.function == rhs.function;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::loop_action::KeyFrameHandleGoal_<ContainerAllocator1> & lhs, const ::loop_action::KeyFrameHandleGoal_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace loop_action

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::loop_action::KeyFrameHandleGoal_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::loop_action::KeyFrameHandleGoal_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::loop_action::KeyFrameHandleGoal_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::loop_action::KeyFrameHandleGoal_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::loop_action::KeyFrameHandleGoal_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::loop_action::KeyFrameHandleGoal_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::loop_action::KeyFrameHandleGoal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "142cf54a24c318f027c4b4907179cc04";
  }

  static const char* value(const ::loop_action::KeyFrameHandleGoal_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x142cf54a24c318f0ULL;
  static const uint64_t static_value2 = 0x27c4b4907179cc04ULL;
};

template<class ContainerAllocator>
struct DataType< ::loop_action::KeyFrameHandleGoal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "loop_action/KeyFrameHandleGoal";
  }

  static const char* value(const ::loop_action::KeyFrameHandleGoal_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::loop_action::KeyFrameHandleGoal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n"
"# Define the goal\n"
"uint32 function  # 1 for add keyframe, 2 for save map keyframe\n"
;
  }

  static const char* value(const ::loop_action::KeyFrameHandleGoal_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::loop_action::KeyFrameHandleGoal_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.function);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct KeyFrameHandleGoal_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::loop_action::KeyFrameHandleGoal_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::loop_action::KeyFrameHandleGoal_<ContainerAllocator>& v)
  {
    s << indent << "function: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.function);
  }
};

} // namespace message_operations
} // namespace ros

#endif // LOOP_ACTION_MESSAGE_KEYFRAMEHANDLEGOAL_H