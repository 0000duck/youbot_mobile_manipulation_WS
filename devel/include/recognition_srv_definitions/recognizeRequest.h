// Generated by gencpp from file recognition_srv_definitions/recognizeRequest.msg
// DO NOT EDIT!


#ifndef RECOGNITION_SRV_DEFINITIONS_MESSAGE_RECOGNIZEREQUEST_H
#define RECOGNITION_SRV_DEFINITIONS_MESSAGE_RECOGNIZEREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <sensor_msgs/PointCloud2.h>
#include <std_msgs/String.h>
#include <std_msgs/String.h>

namespace recognition_srv_definitions
{
template <class ContainerAllocator>
struct recognizeRequest_
{
  typedef recognizeRequest_<ContainerAllocator> Type;

  recognizeRequest_()
    : cloud()
    , transform()
    , scene_name()
    , view_name()  {
    }
  recognizeRequest_(const ContainerAllocator& _alloc)
    : cloud(_alloc)
    , transform(_alloc)
    , scene_name(_alloc)
    , view_name(_alloc)  {
  (void)_alloc;
    }



   typedef  ::sensor_msgs::PointCloud2_<ContainerAllocator>  _cloud_type;
  _cloud_type cloud;

   typedef std::vector<float, typename ContainerAllocator::template rebind<float>::other >  _transform_type;
  _transform_type transform;

   typedef  ::std_msgs::String_<ContainerAllocator>  _scene_name_type;
  _scene_name_type scene_name;

   typedef  ::std_msgs::String_<ContainerAllocator>  _view_name_type;
  _view_name_type view_name;




  typedef boost::shared_ptr< ::recognition_srv_definitions::recognizeRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::recognition_srv_definitions::recognizeRequest_<ContainerAllocator> const> ConstPtr;

}; // struct recognizeRequest_

typedef ::recognition_srv_definitions::recognizeRequest_<std::allocator<void> > recognizeRequest;

typedef boost::shared_ptr< ::recognition_srv_definitions::recognizeRequest > recognizeRequestPtr;
typedef boost::shared_ptr< ::recognition_srv_definitions::recognizeRequest const> recognizeRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::recognition_srv_definitions::recognizeRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::recognition_srv_definitions::recognizeRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace recognition_srv_definitions

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'object_perception_msgs': ['/home/ros/catkin_ws/src/v4r_ros_wrappers/object_perception_msgs/msg'], 'sensor_msgs': ['/opt/ros/indigo/share/sensor_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/indigo/share/geometry_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::recognition_srv_definitions::recognizeRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::recognition_srv_definitions::recognizeRequest_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::recognition_srv_definitions::recognizeRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::recognition_srv_definitions::recognizeRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::recognition_srv_definitions::recognizeRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::recognition_srv_definitions::recognizeRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::recognition_srv_definitions::recognizeRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "6045ef14501a3c3beedfcb560c2ca33d";
  }

  static const char* value(const ::recognition_srv_definitions::recognizeRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x6045ef14501a3c3bULL;
  static const uint64_t static_value2 = 0xeedfcb560c2ca33dULL;
};

template<class ContainerAllocator>
struct DataType< ::recognition_srv_definitions::recognizeRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "recognition_srv_definitions/recognizeRequest";
  }

  static const char* value(const ::recognition_srv_definitions::recognizeRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::recognition_srv_definitions::recognizeRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "sensor_msgs/PointCloud2 cloud\n\
float32[] transform\n\
std_msgs/String scene_name\n\
std_msgs/String view_name\n\
\n\
================================================================================\n\
MSG: sensor_msgs/PointCloud2\n\
# This message holds a collection of N-dimensional points, which may\n\
# contain additional information such as normals, intensity, etc. The\n\
# point data is stored as a binary blob, its layout described by the\n\
# contents of the \"fields\" array.\n\
\n\
# The point cloud data may be organized 2d (image-like) or 1d\n\
# (unordered). Point clouds organized as 2d images may be produced by\n\
# camera depth sensors such as stereo or time-of-flight.\n\
\n\
# Time of sensor data acquisition, and the coordinate frame ID (for 3d\n\
# points).\n\
Header header\n\
\n\
# 2D structure of the point cloud. If the cloud is unordered, height is\n\
# 1 and width is the length of the point cloud.\n\
uint32 height\n\
uint32 width\n\
\n\
# Describes the channels and their layout in the binary data blob.\n\
PointField[] fields\n\
\n\
bool    is_bigendian # Is this data bigendian?\n\
uint32  point_step   # Length of a point in bytes\n\
uint32  row_step     # Length of a row in bytes\n\
uint8[] data         # Actual point data, size is (row_step*height)\n\
\n\
bool is_dense        # True if there are no invalid points\n\
\n\
================================================================================\n\
MSG: std_msgs/Header\n\
# Standard metadata for higher-level stamped data types.\n\
# This is generally used to communicate timestamped data \n\
# in a particular coordinate frame.\n\
# \n\
# sequence ID: consecutively increasing ID \n\
uint32 seq\n\
#Two-integer timestamp that is expressed as:\n\
# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n\
# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n\
# time-handling sugar is provided by the client library\n\
time stamp\n\
#Frame this data is associated with\n\
# 0: no frame\n\
# 1: global frame\n\
string frame_id\n\
\n\
================================================================================\n\
MSG: sensor_msgs/PointField\n\
# This message holds the description of one point entry in the\n\
# PointCloud2 message format.\n\
uint8 INT8    = 1\n\
uint8 UINT8   = 2\n\
uint8 INT16   = 3\n\
uint8 UINT16  = 4\n\
uint8 INT32   = 5\n\
uint8 UINT32  = 6\n\
uint8 FLOAT32 = 7\n\
uint8 FLOAT64 = 8\n\
\n\
string name      # Name of field\n\
uint32 offset    # Offset from start of point struct\n\
uint8  datatype  # Datatype enumeration, see above\n\
uint32 count     # How many elements in the field\n\
\n\
================================================================================\n\
MSG: std_msgs/String\n\
string data\n\
";
  }

  static const char* value(const ::recognition_srv_definitions::recognizeRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::recognition_srv_definitions::recognizeRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.cloud);
      stream.next(m.transform);
      stream.next(m.scene_name);
      stream.next(m.view_name);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct recognizeRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::recognition_srv_definitions::recognizeRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::recognition_srv_definitions::recognizeRequest_<ContainerAllocator>& v)
  {
    s << indent << "cloud: ";
    s << std::endl;
    Printer< ::sensor_msgs::PointCloud2_<ContainerAllocator> >::stream(s, indent + "  ", v.cloud);
    s << indent << "transform[]" << std::endl;
    for (size_t i = 0; i < v.transform.size(); ++i)
    {
      s << indent << "  transform[" << i << "]: ";
      Printer<float>::stream(s, indent + "  ", v.transform[i]);
    }
    s << indent << "scene_name: ";
    s << std::endl;
    Printer< ::std_msgs::String_<ContainerAllocator> >::stream(s, indent + "  ", v.scene_name);
    s << indent << "view_name: ";
    s << std::endl;
    Printer< ::std_msgs::String_<ContainerAllocator> >::stream(s, indent + "  ", v.view_name);
  }
};

} // namespace message_operations
} // namespace ros

#endif // RECOGNITION_SRV_DEFINITIONS_MESSAGE_RECOGNIZEREQUEST_H
