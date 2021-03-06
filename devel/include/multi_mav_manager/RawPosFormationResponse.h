// Generated by gencpp from file multi_mav_manager/RawPosFormationResponse.msg
// DO NOT EDIT!


#ifndef MULTI_MAV_MANAGER_MESSAGE_RAWPOSFORMATIONRESPONSE_H
#define MULTI_MAV_MANAGER_MESSAGE_RAWPOSFORMATIONRESPONSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace multi_mav_manager
{
template <class ContainerAllocator>
struct RawPosFormationResponse_
{
  typedef RawPosFormationResponse_<ContainerAllocator> Type;

  RawPosFormationResponse_()
    : success(false)
    , message()  {
    }
  RawPosFormationResponse_(const ContainerAllocator& _alloc)
    : success(false)
    , message(_alloc)  {
  (void)_alloc;
    }



   typedef uint8_t _success_type;
  _success_type success;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _message_type;
  _message_type message;




  typedef boost::shared_ptr< ::multi_mav_manager::RawPosFormationResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::multi_mav_manager::RawPosFormationResponse_<ContainerAllocator> const> ConstPtr;

}; // struct RawPosFormationResponse_

typedef ::multi_mav_manager::RawPosFormationResponse_<std::allocator<void> > RawPosFormationResponse;

typedef boost::shared_ptr< ::multi_mav_manager::RawPosFormationResponse > RawPosFormationResponsePtr;
typedef boost::shared_ptr< ::multi_mav_manager::RawPosFormationResponse const> RawPosFormationResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::multi_mav_manager::RawPosFormationResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::multi_mav_manager::RawPosFormationResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace multi_mav_manager

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'quadrotor_msgs': ['/home/aarow/ros/vio_swarm_groundstation_ws/src/quadrotor_control/quadrotor_msgs/msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::multi_mav_manager::RawPosFormationResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::multi_mav_manager::RawPosFormationResponse_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::multi_mav_manager::RawPosFormationResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::multi_mav_manager::RawPosFormationResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::multi_mav_manager::RawPosFormationResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::multi_mav_manager::RawPosFormationResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::multi_mav_manager::RawPosFormationResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "937c9679a518e3a18d831e57125ea522";
  }

  static const char* value(const ::multi_mav_manager::RawPosFormationResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x937c9679a518e3a1ULL;
  static const uint64_t static_value2 = 0x8d831e57125ea522ULL;
};

template<class ContainerAllocator>
struct DataType< ::multi_mav_manager::RawPosFormationResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "multi_mav_manager/RawPosFormationResponse";
  }

  static const char* value(const ::multi_mav_manager::RawPosFormationResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::multi_mav_manager::RawPosFormationResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "bool success\n\
string message\n\
\n\
";
  }

  static const char* value(const ::multi_mav_manager::RawPosFormationResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::multi_mav_manager::RawPosFormationResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.success);
      stream.next(m.message);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct RawPosFormationResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::multi_mav_manager::RawPosFormationResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::multi_mav_manager::RawPosFormationResponse_<ContainerAllocator>& v)
  {
    s << indent << "success: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.success);
    s << indent << "message: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.message);
  }
};

} // namespace message_operations
} // namespace ros

#endif // MULTI_MAV_MANAGER_MESSAGE_RAWPOSFORMATIONRESPONSE_H
