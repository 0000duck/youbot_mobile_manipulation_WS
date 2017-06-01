// Generated by gencpp from file recognition_srv_definitions/get_configuration.msg
// DO NOT EDIT!


#ifndef RECOGNITION_SRV_DEFINITIONS_MESSAGE_GET_CONFIGURATION_H
#define RECOGNITION_SRV_DEFINITIONS_MESSAGE_GET_CONFIGURATION_H

#include <ros/service_traits.h>


#include <recognition_srv_definitions/get_configurationRequest.h>
#include <recognition_srv_definitions/get_configurationResponse.h>


namespace recognition_srv_definitions
{

struct get_configuration
{

typedef get_configurationRequest Request;
typedef get_configurationResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct get_configuration
} // namespace recognition_srv_definitions


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::recognition_srv_definitions::get_configuration > {
  static const char* value()
  {
    return "13f7846c6d4d55da52d3bbdb9927422a";
  }

  static const char* value(const ::recognition_srv_definitions::get_configuration&) { return value(); }
};

template<>
struct DataType< ::recognition_srv_definitions::get_configuration > {
  static const char* value()
  {
    return "recognition_srv_definitions/get_configuration";
  }

  static const char* value(const ::recognition_srv_definitions::get_configuration&) { return value(); }
};


// service_traits::MD5Sum< ::recognition_srv_definitions::get_configurationRequest> should match 
// service_traits::MD5Sum< ::recognition_srv_definitions::get_configuration > 
template<>
struct MD5Sum< ::recognition_srv_definitions::get_configurationRequest>
{
  static const char* value()
  {
    return MD5Sum< ::recognition_srv_definitions::get_configuration >::value();
  }
  static const char* value(const ::recognition_srv_definitions::get_configurationRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::recognition_srv_definitions::get_configurationRequest> should match 
// service_traits::DataType< ::recognition_srv_definitions::get_configuration > 
template<>
struct DataType< ::recognition_srv_definitions::get_configurationRequest>
{
  static const char* value()
  {
    return DataType< ::recognition_srv_definitions::get_configuration >::value();
  }
  static const char* value(const ::recognition_srv_definitions::get_configurationRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::recognition_srv_definitions::get_configurationResponse> should match 
// service_traits::MD5Sum< ::recognition_srv_definitions::get_configuration > 
template<>
struct MD5Sum< ::recognition_srv_definitions::get_configurationResponse>
{
  static const char* value()
  {
    return MD5Sum< ::recognition_srv_definitions::get_configuration >::value();
  }
  static const char* value(const ::recognition_srv_definitions::get_configurationResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::recognition_srv_definitions::get_configurationResponse> should match 
// service_traits::DataType< ::recognition_srv_definitions::get_configuration > 
template<>
struct DataType< ::recognition_srv_definitions::get_configurationResponse>
{
  static const char* value()
  {
    return DataType< ::recognition_srv_definitions::get_configuration >::value();
  }
  static const char* value(const ::recognition_srv_definitions::get_configurationResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // RECOGNITION_SRV_DEFINITIONS_MESSAGE_GET_CONFIGURATION_H
