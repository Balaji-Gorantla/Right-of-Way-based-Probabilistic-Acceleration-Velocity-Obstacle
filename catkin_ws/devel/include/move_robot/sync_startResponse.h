// Generated by gencpp from file move_robot/sync_startResponse.msg
// DO NOT EDIT!


#ifndef MOVE_ROBOT_MESSAGE_SYNC_STARTRESPONSE_H
#define MOVE_ROBOT_MESSAGE_SYNC_STARTRESPONSE_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace move_robot
{
template <class ContainerAllocator>
struct sync_startResponse_
{
  typedef sync_startResponse_<ContainerAllocator> Type;

  sync_startResponse_()
    : set_flag(false)  {
    }
  sync_startResponse_(const ContainerAllocator& _alloc)
    : set_flag(false)  {
  (void)_alloc;
    }



   typedef uint8_t _set_flag_type;
  _set_flag_type set_flag;





  typedef boost::shared_ptr< ::move_robot::sync_startResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::move_robot::sync_startResponse_<ContainerAllocator> const> ConstPtr;

}; // struct sync_startResponse_

typedef ::move_robot::sync_startResponse_<std::allocator<void> > sync_startResponse;

typedef boost::shared_ptr< ::move_robot::sync_startResponse > sync_startResponsePtr;
typedef boost::shared_ptr< ::move_robot::sync_startResponse const> sync_startResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::move_robot::sync_startResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::move_robot::sync_startResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::move_robot::sync_startResponse_<ContainerAllocator1> & lhs, const ::move_robot::sync_startResponse_<ContainerAllocator2> & rhs)
{
  return lhs.set_flag == rhs.set_flag;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::move_robot::sync_startResponse_<ContainerAllocator1> & lhs, const ::move_robot::sync_startResponse_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace move_robot

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::move_robot::sync_startResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::move_robot::sync_startResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::move_robot::sync_startResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::move_robot::sync_startResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::move_robot::sync_startResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::move_robot::sync_startResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::move_robot::sync_startResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "919be5a0fb2f3210683a50ba5ac76ad6";
  }

  static const char* value(const ::move_robot::sync_startResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x919be5a0fb2f3210ULL;
  static const uint64_t static_value2 = 0x683a50ba5ac76ad6ULL;
};

template<class ContainerAllocator>
struct DataType< ::move_robot::sync_startResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "move_robot/sync_startResponse";
  }

  static const char* value(const ::move_robot::sync_startResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::move_robot::sync_startResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "bool set_flag\n"
"\n"
;
  }

  static const char* value(const ::move_robot::sync_startResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::move_robot::sync_startResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.set_flag);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct sync_startResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::move_robot::sync_startResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::move_robot::sync_startResponse_<ContainerAllocator>& v)
  {
    s << indent << "set_flag: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.set_flag);
  }
};

} // namespace message_operations
} // namespace ros

#endif // MOVE_ROBOT_MESSAGE_SYNC_STARTRESPONSE_H
