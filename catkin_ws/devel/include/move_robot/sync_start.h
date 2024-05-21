// Generated by gencpp from file move_robot/sync_start.msg
// DO NOT EDIT!


#ifndef MOVE_ROBOT_MESSAGE_SYNC_START_H
#define MOVE_ROBOT_MESSAGE_SYNC_START_H

#include <ros/service_traits.h>


#include <move_robot/sync_startRequest.h>
#include <move_robot/sync_startResponse.h>


namespace move_robot
{

struct sync_start
{

typedef sync_startRequest Request;
typedef sync_startResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct sync_start
} // namespace move_robot


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::move_robot::sync_start > {
  static const char* value()
  {
    return "f28b7d6543382a4046cd196e0567aca4";
  }

  static const char* value(const ::move_robot::sync_start&) { return value(); }
};

template<>
struct DataType< ::move_robot::sync_start > {
  static const char* value()
  {
    return "move_robot/sync_start";
  }

  static const char* value(const ::move_robot::sync_start&) { return value(); }
};


// service_traits::MD5Sum< ::move_robot::sync_startRequest> should match
// service_traits::MD5Sum< ::move_robot::sync_start >
template<>
struct MD5Sum< ::move_robot::sync_startRequest>
{
  static const char* value()
  {
    return MD5Sum< ::move_robot::sync_start >::value();
  }
  static const char* value(const ::move_robot::sync_startRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::move_robot::sync_startRequest> should match
// service_traits::DataType< ::move_robot::sync_start >
template<>
struct DataType< ::move_robot::sync_startRequest>
{
  static const char* value()
  {
    return DataType< ::move_robot::sync_start >::value();
  }
  static const char* value(const ::move_robot::sync_startRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::move_robot::sync_startResponse> should match
// service_traits::MD5Sum< ::move_robot::sync_start >
template<>
struct MD5Sum< ::move_robot::sync_startResponse>
{
  static const char* value()
  {
    return MD5Sum< ::move_robot::sync_start >::value();
  }
  static const char* value(const ::move_robot::sync_startResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::move_robot::sync_startResponse> should match
// service_traits::DataType< ::move_robot::sync_start >
template<>
struct DataType< ::move_robot::sync_startResponse>
{
  static const char* value()
  {
    return DataType< ::move_robot::sync_start >::value();
  }
  static const char* value(const ::move_robot::sync_startResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // MOVE_ROBOT_MESSAGE_SYNC_START_H