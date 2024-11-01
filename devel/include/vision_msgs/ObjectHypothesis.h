// Generated by gencpp from file vision_msgs/ObjectHypothesis.msg
// DO NOT EDIT!


#ifndef VISION_MSGS_MESSAGE_OBJECTHYPOTHESIS_H
#define VISION_MSGS_MESSAGE_OBJECTHYPOTHESIS_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace vision_msgs
{
template <class ContainerAllocator>
struct ObjectHypothesis_
{
  typedef ObjectHypothesis_<ContainerAllocator> Type;

  ObjectHypothesis_()
    : id()
    , score(0.0)  {
    }
  ObjectHypothesis_(const ContainerAllocator& _alloc)
    : id(_alloc)
    , score(0.0)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> _id_type;
  _id_type id;

   typedef double _score_type;
  _score_type score;





  typedef boost::shared_ptr< ::vision_msgs::ObjectHypothesis_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::vision_msgs::ObjectHypothesis_<ContainerAllocator> const> ConstPtr;

}; // struct ObjectHypothesis_

typedef ::vision_msgs::ObjectHypothesis_<std::allocator<void> > ObjectHypothesis;

typedef boost::shared_ptr< ::vision_msgs::ObjectHypothesis > ObjectHypothesisPtr;
typedef boost::shared_ptr< ::vision_msgs::ObjectHypothesis const> ObjectHypothesisConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::vision_msgs::ObjectHypothesis_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::vision_msgs::ObjectHypothesis_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::vision_msgs::ObjectHypothesis_<ContainerAllocator1> & lhs, const ::vision_msgs::ObjectHypothesis_<ContainerAllocator2> & rhs)
{
  return lhs.id == rhs.id &&
    lhs.score == rhs.score;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::vision_msgs::ObjectHypothesis_<ContainerAllocator1> & lhs, const ::vision_msgs::ObjectHypothesis_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace vision_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::vision_msgs::ObjectHypothesis_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::vision_msgs::ObjectHypothesis_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::vision_msgs::ObjectHypothesis_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::vision_msgs::ObjectHypothesis_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::vision_msgs::ObjectHypothesis_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::vision_msgs::ObjectHypothesis_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::vision_msgs::ObjectHypothesis_<ContainerAllocator> >
{
  static const char* value()
  {
    return "6d51bda6d3783ccca113b20d066cc679";
  }

  static const char* value(const ::vision_msgs::ObjectHypothesis_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x6d51bda6d3783cccULL;
  static const uint64_t static_value2 = 0xa113b20d066cc679ULL;
};

template<class ContainerAllocator>
struct DataType< ::vision_msgs::ObjectHypothesis_<ContainerAllocator> >
{
  static const char* value()
  {
    return "vision_msgs/ObjectHypothesis";
  }

  static const char* value(const ::vision_msgs::ObjectHypothesis_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::vision_msgs::ObjectHypothesis_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# An object hypothesis that contains no position information.\n"
"\n"
"# The unique ID of the object class. To get additional information about\n"
"#   this ID, such as its human-readable class name, listeners should perform a\n"
"#   lookup in a metadata database. See vision_msgs/VisionInfo.msg for more detail.\n"
"string id\n"
"\n"
"# The probability or confidence value of the detected object. By convention,\n"
"#   this value should lie in the range [0-1].\n"
"float64 score\n"
;
  }

  static const char* value(const ::vision_msgs::ObjectHypothesis_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::vision_msgs::ObjectHypothesis_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.id);
      stream.next(m.score);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ObjectHypothesis_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::vision_msgs::ObjectHypothesis_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::vision_msgs::ObjectHypothesis_<ContainerAllocator>& v)
  {
    s << indent << "id: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>::stream(s, indent + "  ", v.id);
    s << indent << "score: ";
    Printer<double>::stream(s, indent + "  ", v.score);
  }
};

} // namespace message_operations
} // namespace ros

#endif // VISION_MSGS_MESSAGE_OBJECTHYPOTHESIS_H
