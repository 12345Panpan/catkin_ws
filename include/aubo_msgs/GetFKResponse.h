// Generated by gencpp from file aubo_msgs/GetFKResponse.msg
// DO NOT EDIT!


#ifndef AUBO_MSGS_MESSAGE_GETFKRESPONSE_H
#define AUBO_MSGS_MESSAGE_GETFKRESPONSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace aubo_msgs
{
template <class ContainerAllocator>
struct GetFKResponse_
{
  typedef GetFKResponse_<ContainerAllocator> Type;

  GetFKResponse_()
    : pos()
    , ori()  {
    }
  GetFKResponse_(const ContainerAllocator& _alloc)
    : pos(_alloc)
    , ori(_alloc)  {
  (void)_alloc;
    }



   typedef std::vector<float, typename ContainerAllocator::template rebind<float>::other >  _pos_type;
  _pos_type pos;

   typedef std::vector<float, typename ContainerAllocator::template rebind<float>::other >  _ori_type;
  _ori_type ori;





  typedef boost::shared_ptr< ::aubo_msgs::GetFKResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::aubo_msgs::GetFKResponse_<ContainerAllocator> const> ConstPtr;

}; // struct GetFKResponse_

typedef ::aubo_msgs::GetFKResponse_<std::allocator<void> > GetFKResponse;

typedef boost::shared_ptr< ::aubo_msgs::GetFKResponse > GetFKResponsePtr;
typedef boost::shared_ptr< ::aubo_msgs::GetFKResponse const> GetFKResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::aubo_msgs::GetFKResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::aubo_msgs::GetFKResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace aubo_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'aubo_msgs': ['/home/bjut/catkin_ws/src/aubo_msgs/msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::aubo_msgs::GetFKResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::aubo_msgs::GetFKResponse_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::aubo_msgs::GetFKResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::aubo_msgs::GetFKResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::aubo_msgs::GetFKResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::aubo_msgs::GetFKResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::aubo_msgs::GetFKResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "b3654b8637ad1ff105c21ad630b0d51e";
  }

  static const char* value(const ::aubo_msgs::GetFKResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xb3654b8637ad1ff1ULL;
  static const uint64_t static_value2 = 0x05c21ad630b0d51eULL;
};

template<class ContainerAllocator>
struct DataType< ::aubo_msgs::GetFKResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "aubo_msgs/GetFKResponse";
  }

  static const char* value(const ::aubo_msgs::GetFKResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::aubo_msgs::GetFKResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "float32[] pos\n\
float32[] ori\n\
\n\
\n\
";
  }

  static const char* value(const ::aubo_msgs::GetFKResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::aubo_msgs::GetFKResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.pos);
      stream.next(m.ori);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct GetFKResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::aubo_msgs::GetFKResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::aubo_msgs::GetFKResponse_<ContainerAllocator>& v)
  {
    s << indent << "pos[]" << std::endl;
    for (size_t i = 0; i < v.pos.size(); ++i)
    {
      s << indent << "  pos[" << i << "]: ";
      Printer<float>::stream(s, indent + "  ", v.pos[i]);
    }
    s << indent << "ori[]" << std::endl;
    for (size_t i = 0; i < v.ori.size(); ++i)
    {
      s << indent << "  ori[" << i << "]: ";
      Printer<float>::stream(s, indent + "  ", v.ori[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // AUBO_MSGS_MESSAGE_GETFKRESPONSE_H
