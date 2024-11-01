// Generated by gencpp from file wpb_home_tutorials/FollowResponse.msg
// DO NOT EDIT!


#ifndef WPB_HOME_TUTORIALS_MESSAGE_FOLLOWRESPONSE_H
#define WPB_HOME_TUTORIALS_MESSAGE_FOLLOWRESPONSE_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace wpb_home_tutorials
{
template <class ContainerAllocator>
struct FollowResponse_
{
  typedef FollowResponse_<ContainerAllocator> Type;

  FollowResponse_()
    : result(false)  {
    }
  FollowResponse_(const ContainerAllocator& _alloc)
    : result(false)  {
  (void)_alloc;
    }



   typedef uint8_t _result_type;
  _result_type result;





  typedef boost::shared_ptr< ::wpb_home_tutorials::FollowResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::wpb_home_tutorials::FollowResponse_<ContainerAllocator> const> ConstPtr;

}; // struct FollowResponse_

typedef ::wpb_home_tutorials::FollowResponse_<std::allocator<void> > FollowResponse;

typedef boost::shared_ptr< ::wpb_home_tutorials::FollowResponse > FollowResponsePtr;
typedef boost::shared_ptr< ::wpb_home_tutorials::FollowResponse const> FollowResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::wpb_home_tutorials::FollowResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::wpb_home_tutorials::FollowResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::wpb_home_tutorials::FollowResponse_<ContainerAllocator1> & lhs, const ::wpb_home_tutorials::FollowResponse_<ContainerAllocator2> & rhs)
{
  return lhs.result == rhs.result;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::wpb_home_tutorials::FollowResponse_<ContainerAllocator1> & lhs, const ::wpb_home_tutorials::FollowResponse_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace wpb_home_tutorials

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::wpb_home_tutorials::FollowResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::wpb_home_tutorials::FollowResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::wpb_home_tutorials::FollowResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::wpb_home_tutorials::FollowResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::wpb_home_tutorials::FollowResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::wpb_home_tutorials::FollowResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::wpb_home_tutorials::FollowResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "eb13ac1f1354ccecb7941ee8fa2192e8";
  }

  static const char* value(const ::wpb_home_tutorials::FollowResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xeb13ac1f1354ccecULL;
  static const uint64_t static_value2 = 0xb7941ee8fa2192e8ULL;
};

template<class ContainerAllocator>
struct DataType< ::wpb_home_tutorials::FollowResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "wpb_home_tutorials/FollowResponse";
  }

  static const char* value(const ::wpb_home_tutorials::FollowResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::wpb_home_tutorials::FollowResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "bool result\n"
;
  }

  static const char* value(const ::wpb_home_tutorials::FollowResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::wpb_home_tutorials::FollowResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.result);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct FollowResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::wpb_home_tutorials::FollowResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::wpb_home_tutorials::FollowResponse_<ContainerAllocator>& v)
  {
    s << indent << "result: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.result);
  }
};

} // namespace message_operations
} // namespace ros

#endif // WPB_HOME_TUTORIALS_MESSAGE_FOLLOWRESPONSE_H
