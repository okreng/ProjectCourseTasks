// Generated by gencpp from file message_ui/sent_msg.msg
// DO NOT EDIT!


#ifndef MESSAGE_UI_MESSAGE_SENT_MSG_H
#define MESSAGE_UI_MESSAGE_SENT_MSG_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>

namespace message_ui
{
template <class ContainerAllocator>
struct sent_msg_
{
  typedef sent_msg_<ContainerAllocator> Type;

  sent_msg_()
    : header()
    , message()  {
    }
  sent_msg_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , message(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _message_type;
  _message_type message;




  typedef boost::shared_ptr< ::message_ui::sent_msg_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::message_ui::sent_msg_<ContainerAllocator> const> ConstPtr;

}; // struct sent_msg_

typedef ::message_ui::sent_msg_<std::allocator<void> > sent_msg;

typedef boost::shared_ptr< ::message_ui::sent_msg > sent_msgPtr;
typedef boost::shared_ptr< ::message_ui::sent_msg const> sent_msgConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::message_ui::sent_msg_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::message_ui::sent_msg_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace message_ui

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': True}
// {'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg'], 'message_ui': ['/home/okrengel/catkin_ws/src/message_ui/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::message_ui::sent_msg_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::message_ui::sent_msg_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::message_ui::sent_msg_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::message_ui::sent_msg_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::message_ui::sent_msg_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::message_ui::sent_msg_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::message_ui::sent_msg_<ContainerAllocator> >
{
  static const char* value()
  {
    return "49f8a60a46dc2a23c8756dda3465c662";
  }

  static const char* value(const ::message_ui::sent_msg_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x49f8a60a46dc2a23ULL;
  static const uint64_t static_value2 = 0xc8756dda3465c662ULL;
};

template<class ContainerAllocator>
struct DataType< ::message_ui::sent_msg_<ContainerAllocator> >
{
  static const char* value()
  {
    return "message_ui/sent_msg";
  }

  static const char* value(const ::message_ui::sent_msg_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::message_ui::sent_msg_<ContainerAllocator> >
{
  static const char* value()
  {
    return "Header header\n\
string message\n\
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
";
  }

  static const char* value(const ::message_ui::sent_msg_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::message_ui::sent_msg_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.message);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct sent_msg_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::message_ui::sent_msg_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::message_ui::sent_msg_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "message: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.message);
  }
};

} // namespace message_operations
} // namespace ros

#endif // MESSAGE_UI_MESSAGE_SENT_MSG_H
