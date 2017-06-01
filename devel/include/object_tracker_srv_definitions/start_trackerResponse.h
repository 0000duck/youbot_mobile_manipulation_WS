// Generated by gencpp from file object_tracker_srv_definitions/start_trackerResponse.msg
// DO NOT EDIT!


#ifndef OBJECT_TRACKER_SRV_DEFINITIONS_MESSAGE_START_TRACKERRESPONSE_H
#define OBJECT_TRACKER_SRV_DEFINITIONS_MESSAGE_START_TRACKERRESPONSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace object_tracker_srv_definitions
{
template <class ContainerAllocator>
struct start_trackerResponse_
{
  typedef start_trackerResponse_<ContainerAllocator> Type;

  start_trackerResponse_()
    {
    }
  start_trackerResponse_(const ContainerAllocator& _alloc)
    {
  (void)_alloc;
    }






  typedef boost::shared_ptr< ::object_tracker_srv_definitions::start_trackerResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::object_tracker_srv_definitions::start_trackerResponse_<ContainerAllocator> const> ConstPtr;

}; // struct start_trackerResponse_

typedef ::object_tracker_srv_definitions::start_trackerResponse_<std::allocator<void> > start_trackerResponse;

typedef boost::shared_ptr< ::object_tracker_srv_definitions::start_trackerResponse > start_trackerResponsePtr;
typedef boost::shared_ptr< ::object_tracker_srv_definitions::start_trackerResponse const> start_trackerResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::object_tracker_srv_definitions::start_trackerResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::object_tracker_srv_definitions::start_trackerResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace object_tracker_srv_definitions

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'sensor_msgs': ['/opt/ros/indigo/share/sensor_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/indigo/share/geometry_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::object_tracker_srv_definitions::start_trackerResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::object_tracker_srv_definitions::start_trackerResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::object_tracker_srv_definitions::start_trackerResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::object_tracker_srv_definitions::start_trackerResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::object_tracker_srv_definitions::start_trackerResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::object_tracker_srv_definitions::start_trackerResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::object_tracker_srv_definitions::start_trackerResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "d41d8cd98f00b204e9800998ecf8427e";
  }

  static const char* value(const ::object_tracker_srv_definitions::start_trackerResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xd41d8cd98f00b204ULL;
  static const uint64_t static_value2 = 0xe9800998ecf8427eULL;
};

template<class ContainerAllocator>
struct DataType< ::object_tracker_srv_definitions::start_trackerResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "object_tracker_srv_definitions/start_trackerResponse";
  }

  static const char* value(const ::object_tracker_srv_definitions::start_trackerResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::object_tracker_srv_definitions::start_trackerResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n\
";
  }

  static const char* value(const ::object_tracker_srv_definitions::start_trackerResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::object_tracker_srv_definitions::start_trackerResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream&, T)
    {}

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct start_trackerResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::object_tracker_srv_definitions::start_trackerResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream&, const std::string&, const ::object_tracker_srv_definitions::start_trackerResponse_<ContainerAllocator>&)
  {}
};

} // namespace message_operations
} // namespace ros

#endif // OBJECT_TRACKER_SRV_DEFINITIONS_MESSAGE_START_TRACKERRESPONSE_H
