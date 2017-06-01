// Generated by gencpp from file segmentation_srv_definitions/segment.msg
// DO NOT EDIT!


#ifndef SEGMENTATION_SRV_DEFINITIONS_MESSAGE_SEGMENT_H
#define SEGMENTATION_SRV_DEFINITIONS_MESSAGE_SEGMENT_H

#include <ros/service_traits.h>


#include <segmentation_srv_definitions/segmentRequest.h>
#include <segmentation_srv_definitions/segmentResponse.h>


namespace segmentation_srv_definitions
{

struct segment
{

typedef segmentRequest Request;
typedef segmentResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct segment
} // namespace segmentation_srv_definitions


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::segmentation_srv_definitions::segment > {
  static const char* value()
  {
    return "7ba3ffaa20449deb1fc02a80f32310fb";
  }

  static const char* value(const ::segmentation_srv_definitions::segment&) { return value(); }
};

template<>
struct DataType< ::segmentation_srv_definitions::segment > {
  static const char* value()
  {
    return "segmentation_srv_definitions/segment";
  }

  static const char* value(const ::segmentation_srv_definitions::segment&) { return value(); }
};


// service_traits::MD5Sum< ::segmentation_srv_definitions::segmentRequest> should match 
// service_traits::MD5Sum< ::segmentation_srv_definitions::segment > 
template<>
struct MD5Sum< ::segmentation_srv_definitions::segmentRequest>
{
  static const char* value()
  {
    return MD5Sum< ::segmentation_srv_definitions::segment >::value();
  }
  static const char* value(const ::segmentation_srv_definitions::segmentRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::segmentation_srv_definitions::segmentRequest> should match 
// service_traits::DataType< ::segmentation_srv_definitions::segment > 
template<>
struct DataType< ::segmentation_srv_definitions::segmentRequest>
{
  static const char* value()
  {
    return DataType< ::segmentation_srv_definitions::segment >::value();
  }
  static const char* value(const ::segmentation_srv_definitions::segmentRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::segmentation_srv_definitions::segmentResponse> should match 
// service_traits::MD5Sum< ::segmentation_srv_definitions::segment > 
template<>
struct MD5Sum< ::segmentation_srv_definitions::segmentResponse>
{
  static const char* value()
  {
    return MD5Sum< ::segmentation_srv_definitions::segment >::value();
  }
  static const char* value(const ::segmentation_srv_definitions::segmentResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::segmentation_srv_definitions::segmentResponse> should match 
// service_traits::DataType< ::segmentation_srv_definitions::segment > 
template<>
struct DataType< ::segmentation_srv_definitions::segmentResponse>
{
  static const char* value()
  {
    return DataType< ::segmentation_srv_definitions::segment >::value();
  }
  static const char* value(const ::segmentation_srv_definitions::segmentResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // SEGMENTATION_SRV_DEFINITIONS_MESSAGE_SEGMENT_H
