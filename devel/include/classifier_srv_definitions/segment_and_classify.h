// Generated by gencpp from file classifier_srv_definitions/segment_and_classify.msg
// DO NOT EDIT!


#ifndef CLASSIFIER_SRV_DEFINITIONS_MESSAGE_SEGMENT_AND_CLASSIFY_H
#define CLASSIFIER_SRV_DEFINITIONS_MESSAGE_SEGMENT_AND_CLASSIFY_H

#include <ros/service_traits.h>


#include <classifier_srv_definitions/segment_and_classifyRequest.h>
#include <classifier_srv_definitions/segment_and_classifyResponse.h>


namespace classifier_srv_definitions
{

struct segment_and_classify
{

typedef segment_and_classifyRequest Request;
typedef segment_and_classifyResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct segment_and_classify
} // namespace classifier_srv_definitions


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::classifier_srv_definitions::segment_and_classify > {
  static const char* value()
  {
    return "c733423904dd903f58b9a9f320c00a6d";
  }

  static const char* value(const ::classifier_srv_definitions::segment_and_classify&) { return value(); }
};

template<>
struct DataType< ::classifier_srv_definitions::segment_and_classify > {
  static const char* value()
  {
    return "classifier_srv_definitions/segment_and_classify";
  }

  static const char* value(const ::classifier_srv_definitions::segment_and_classify&) { return value(); }
};


// service_traits::MD5Sum< ::classifier_srv_definitions::segment_and_classifyRequest> should match 
// service_traits::MD5Sum< ::classifier_srv_definitions::segment_and_classify > 
template<>
struct MD5Sum< ::classifier_srv_definitions::segment_and_classifyRequest>
{
  static const char* value()
  {
    return MD5Sum< ::classifier_srv_definitions::segment_and_classify >::value();
  }
  static const char* value(const ::classifier_srv_definitions::segment_and_classifyRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::classifier_srv_definitions::segment_and_classifyRequest> should match 
// service_traits::DataType< ::classifier_srv_definitions::segment_and_classify > 
template<>
struct DataType< ::classifier_srv_definitions::segment_and_classifyRequest>
{
  static const char* value()
  {
    return DataType< ::classifier_srv_definitions::segment_and_classify >::value();
  }
  static const char* value(const ::classifier_srv_definitions::segment_and_classifyRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::classifier_srv_definitions::segment_and_classifyResponse> should match 
// service_traits::MD5Sum< ::classifier_srv_definitions::segment_and_classify > 
template<>
struct MD5Sum< ::classifier_srv_definitions::segment_and_classifyResponse>
{
  static const char* value()
  {
    return MD5Sum< ::classifier_srv_definitions::segment_and_classify >::value();
  }
  static const char* value(const ::classifier_srv_definitions::segment_and_classifyResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::classifier_srv_definitions::segment_and_classifyResponse> should match 
// service_traits::DataType< ::classifier_srv_definitions::segment_and_classify > 
template<>
struct DataType< ::classifier_srv_definitions::segment_and_classifyResponse>
{
  static const char* value()
  {
    return DataType< ::classifier_srv_definitions::segment_and_classify >::value();
  }
  static const char* value(const ::classifier_srv_definitions::segment_and_classifyResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // CLASSIFIER_SRV_DEFINITIONS_MESSAGE_SEGMENT_AND_CLASSIFY_H
