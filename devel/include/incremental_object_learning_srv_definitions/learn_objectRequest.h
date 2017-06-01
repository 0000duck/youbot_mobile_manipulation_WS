// Generated by gencpp from file incremental_object_learning_srv_definitions/learn_objectRequest.msg
// DO NOT EDIT!


#ifndef INCREMENTAL_OBJECT_LEARNING_SRV_DEFINITIONS_MESSAGE_LEARN_OBJECTREQUEST_H
#define INCREMENTAL_OBJECT_LEARNING_SRV_DEFINITIONS_MESSAGE_LEARN_OBJECTREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <sensor_msgs/PointCloud2.h>
#include <geometry_msgs/Transform.h>

namespace incremental_object_learning_srv_definitions
{
template <class ContainerAllocator>
struct learn_objectRequest_
{
  typedef learn_objectRequest_<ContainerAllocator> Type;

  learn_objectRequest_()
    : keyframes()
    , transforms()
    , intial_object_indices()  {
    }
  learn_objectRequest_(const ContainerAllocator& _alloc)
    : keyframes(_alloc)
    , transforms(_alloc)
    , intial_object_indices(_alloc)  {
  (void)_alloc;
    }



   typedef std::vector< ::sensor_msgs::PointCloud2_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::sensor_msgs::PointCloud2_<ContainerAllocator> >::other >  _keyframes_type;
  _keyframes_type keyframes;

   typedef std::vector< ::geometry_msgs::Transform_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::geometry_msgs::Transform_<ContainerAllocator> >::other >  _transforms_type;
  _transforms_type transforms;

   typedef std::vector<int32_t, typename ContainerAllocator::template rebind<int32_t>::other >  _intial_object_indices_type;
  _intial_object_indices_type intial_object_indices;




  typedef boost::shared_ptr< ::incremental_object_learning_srv_definitions::learn_objectRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::incremental_object_learning_srv_definitions::learn_objectRequest_<ContainerAllocator> const> ConstPtr;

}; // struct learn_objectRequest_

typedef ::incremental_object_learning_srv_definitions::learn_objectRequest_<std::allocator<void> > learn_objectRequest;

typedef boost::shared_ptr< ::incremental_object_learning_srv_definitions::learn_objectRequest > learn_objectRequestPtr;
typedef boost::shared_ptr< ::incremental_object_learning_srv_definitions::learn_objectRequest const> learn_objectRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::incremental_object_learning_srv_definitions::learn_objectRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::incremental_object_learning_srv_definitions::learn_objectRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace incremental_object_learning_srv_definitions

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'sensor_msgs': ['/opt/ros/indigo/share/sensor_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/indigo/share/geometry_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::incremental_object_learning_srv_definitions::learn_objectRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::incremental_object_learning_srv_definitions::learn_objectRequest_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::incremental_object_learning_srv_definitions::learn_objectRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::incremental_object_learning_srv_definitions::learn_objectRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::incremental_object_learning_srv_definitions::learn_objectRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::incremental_object_learning_srv_definitions::learn_objectRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::incremental_object_learning_srv_definitions::learn_objectRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "44dd9257f52ea9231403037ca8d8433e";
  }

  static const char* value(const ::incremental_object_learning_srv_definitions::learn_objectRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x44dd9257f52ea923ULL;
  static const uint64_t static_value2 = 0x1403037ca8d8433eULL;
};

template<class ContainerAllocator>
struct DataType< ::incremental_object_learning_srv_definitions::learn_objectRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "incremental_object_learning_srv_definitions/learn_objectRequest";
  }

  static const char* value(const ::incremental_object_learning_srv_definitions::learn_objectRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::incremental_object_learning_srv_definitions::learn_objectRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "sensor_msgs/PointCloud2[] keyframes\n\
\n\
geometry_msgs/Transform[] transforms\n\
\n\
int32[] intial_object_indices\n\
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
MSG: geometry_msgs/Transform\n\
# This represents the transform between two coordinate frames in free space.\n\
\n\
Vector3 translation\n\
Quaternion rotation\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Vector3\n\
# This represents a vector in free space. \n\
# It is only meant to represent a direction. Therefore, it does not\n\
# make sense to apply a translation to it (e.g., when applying a \n\
# generic rigid transformation to a Vector3, tf2 will only apply the\n\
# rotation). If you want your data to be translatable too, use the\n\
# geometry_msgs/Point message instead.\n\
\n\
float64 x\n\
float64 y\n\
float64 z\n\
================================================================================\n\
MSG: geometry_msgs/Quaternion\n\
# This represents an orientation in free space in quaternion form.\n\
\n\
float64 x\n\
float64 y\n\
float64 z\n\
float64 w\n\
";
  }

  static const char* value(const ::incremental_object_learning_srv_definitions::learn_objectRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::incremental_object_learning_srv_definitions::learn_objectRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.keyframes);
      stream.next(m.transforms);
      stream.next(m.intial_object_indices);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct learn_objectRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::incremental_object_learning_srv_definitions::learn_objectRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::incremental_object_learning_srv_definitions::learn_objectRequest_<ContainerAllocator>& v)
  {
    s << indent << "keyframes[]" << std::endl;
    for (size_t i = 0; i < v.keyframes.size(); ++i)
    {
      s << indent << "  keyframes[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::sensor_msgs::PointCloud2_<ContainerAllocator> >::stream(s, indent + "    ", v.keyframes[i]);
    }
    s << indent << "transforms[]" << std::endl;
    for (size_t i = 0; i < v.transforms.size(); ++i)
    {
      s << indent << "  transforms[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::geometry_msgs::Transform_<ContainerAllocator> >::stream(s, indent + "    ", v.transforms[i]);
    }
    s << indent << "intial_object_indices[]" << std::endl;
    for (size_t i = 0; i < v.intial_object_indices.size(); ++i)
    {
      s << indent << "  intial_object_indices[" << i << "]: ";
      Printer<int32_t>::stream(s, indent + "  ", v.intial_object_indices[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // INCREMENTAL_OBJECT_LEARNING_SRV_DEFINITIONS_MESSAGE_LEARN_OBJECTREQUEST_H
