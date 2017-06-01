// Generated by gencpp from file segmentation_srv_definitions/MS_segment.msg
// DO NOT EDIT!


#ifndef SEGMENTATION_SRV_DEFINITIONS_MESSAGE_MS_SEGMENT_H
#define SEGMENTATION_SRV_DEFINITIONS_MESSAGE_MS_SEGMENT_H

#include <ros/service_traits.h>


#include <segmentation_srv_definitions/MS_segmentRequest.h>
#include <segmentation_srv_definitions/MS_segmentResponse.h>


namespace segmentation_srv_definitions
{

struct MS_segment
{

typedef MS_segmentRequest Request;
typedef MS_segmentResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct MS_segment
} // namespace segmentation_srv_definitions


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::segmentation_srv_definitions::MS_segment > {
  static const char* value()
  {
    return "a8aa0dde4a2a8f822d91756082ac75f7";
  }

  static const char* value(const ::segmentation_srv_definitions::MS_segment&) { return value(); }
};

template<>
struct DataType< ::segmentation_srv_definitions::MS_segment > {
  static const char* value()
  {
    return "segmentation_srv_definitions/MS_segment";
  }

  static const char* value(const ::segmentation_srv_definitions::MS_segment&) { return value(); }
};


// service_traits::MD5Sum< ::segmentation_srv_definitions::MS_segmentRequest> should match 
// service_traits::MD5Sum< ::segmentation_srv_definitions::MS_segment > 
template<>
struct MD5Sum< ::segmentation_srv_definitions::MS_segmentRequest>
{
  static const char* value()
  {
    return MD5Sum< ::segmentation_srv_definitions::MS_segment >::value();
  }
  static const char* value(const ::segmentation_srv_definitions::MS_segmentRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::segmentation_srv_definitions::MS_segmentRequest> should match 
// service_traits::DataType< ::segmentation_srv_definitions::MS_segment > 
template<>
struct DataType< ::segmentation_srv_definitions::MS_segmentRequest>
{
  static const char* value()
  {
    return DataType< ::segmentation_srv_definitions::MS_segment >::value();
  }
  static const char* value(const ::segmentation_srv_definitions::MS_segmentRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::segmentation_srv_definitions::MS_segmentResponse> should match 
// service_traits::MD5Sum< ::segmentation_srv_definitions::MS_segment > 
template<>
struct MD5Sum< ::segmentation_srv_definitions::MS_segmentResponse>
{
  static const char* value()
  {
    return MD5Sum< ::segmentation_srv_definitions::MS_segment >::value();
  }
  static const char* value(const ::segmentation_srv_definitions::MS_segmentResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::segmentation_srv_definitions::MS_segmentResponse> should match 
// service_traits::DataType< ::segmentation_srv_definitions::MS_segment > 
template<>
struct DataType< ::segmentation_srv_definitions::MS_segmentResponse>
{
  static const char* value()
  {
    return DataType< ::segmentation_srv_definitions::MS_segment >::value();
  }
  static const char* value(const ::segmentation_srv_definitions::MS_segmentResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // SEGMENTATION_SRV_DEFINITIONS_MESSAGE_MS_SEGMENT_H
