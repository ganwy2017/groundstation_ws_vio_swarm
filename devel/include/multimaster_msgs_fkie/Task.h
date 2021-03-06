// Generated by gencpp from file multimaster_msgs_fkie/Task.msg
// DO NOT EDIT!


#ifndef MULTIMASTER_MSGS_FKIE_MESSAGE_TASK_H
#define MULTIMASTER_MSGS_FKIE_MESSAGE_TASK_H

#include <ros/service_traits.h>


#include <multimaster_msgs_fkie/TaskRequest.h>
#include <multimaster_msgs_fkie/TaskResponse.h>


namespace multimaster_msgs_fkie
{

struct Task
{

typedef TaskRequest Request;
typedef TaskResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct Task
} // namespace multimaster_msgs_fkie


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::multimaster_msgs_fkie::Task > {
  static const char* value()
  {
    return "a94c40e70a4b82863e6e52ec16732447";
  }

  static const char* value(const ::multimaster_msgs_fkie::Task&) { return value(); }
};

template<>
struct DataType< ::multimaster_msgs_fkie::Task > {
  static const char* value()
  {
    return "multimaster_msgs_fkie/Task";
  }

  static const char* value(const ::multimaster_msgs_fkie::Task&) { return value(); }
};


// service_traits::MD5Sum< ::multimaster_msgs_fkie::TaskRequest> should match 
// service_traits::MD5Sum< ::multimaster_msgs_fkie::Task > 
template<>
struct MD5Sum< ::multimaster_msgs_fkie::TaskRequest>
{
  static const char* value()
  {
    return MD5Sum< ::multimaster_msgs_fkie::Task >::value();
  }
  static const char* value(const ::multimaster_msgs_fkie::TaskRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::multimaster_msgs_fkie::TaskRequest> should match 
// service_traits::DataType< ::multimaster_msgs_fkie::Task > 
template<>
struct DataType< ::multimaster_msgs_fkie::TaskRequest>
{
  static const char* value()
  {
    return DataType< ::multimaster_msgs_fkie::Task >::value();
  }
  static const char* value(const ::multimaster_msgs_fkie::TaskRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::multimaster_msgs_fkie::TaskResponse> should match 
// service_traits::MD5Sum< ::multimaster_msgs_fkie::Task > 
template<>
struct MD5Sum< ::multimaster_msgs_fkie::TaskResponse>
{
  static const char* value()
  {
    return MD5Sum< ::multimaster_msgs_fkie::Task >::value();
  }
  static const char* value(const ::multimaster_msgs_fkie::TaskResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::multimaster_msgs_fkie::TaskResponse> should match 
// service_traits::DataType< ::multimaster_msgs_fkie::Task > 
template<>
struct DataType< ::multimaster_msgs_fkie::TaskResponse>
{
  static const char* value()
  {
    return DataType< ::multimaster_msgs_fkie::Task >::value();
  }
  static const char* value(const ::multimaster_msgs_fkie::TaskResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // MULTIMASTER_MSGS_FKIE_MESSAGE_TASK_H
