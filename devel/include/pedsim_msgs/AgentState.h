// Generated by gencpp from file pedsim_msgs/AgentState.msg
// DO NOT EDIT!


#ifndef PEDSIM_MSGS_MESSAGE_AGENTSTATE_H
#define PEDSIM_MSGS_MESSAGE_AGENTSTATE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <geometry_msgs/Pose.h>
#include <geometry_msgs/Twist.h>
#include <pedsim_msgs/AgentForce.h>

namespace pedsim_msgs
{
template <class ContainerAllocator>
struct AgentState_
{
  typedef AgentState_<ContainerAllocator> Type;

  AgentState_()
    : header()
    , id(0)
    , type(0)
    , social_state()
    , pose()
    , twist()
    , forces()  {
    }
  AgentState_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , id(0)
    , type(0)
    , social_state(_alloc)
    , pose(_alloc)
    , twist(_alloc)
    , forces(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef uint64_t _id_type;
  _id_type id;

   typedef uint16_t _type_type;
  _type_type type;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _social_state_type;
  _social_state_type social_state;

   typedef  ::geometry_msgs::Pose_<ContainerAllocator>  _pose_type;
  _pose_type pose;

   typedef  ::geometry_msgs::Twist_<ContainerAllocator>  _twist_type;
  _twist_type twist;

   typedef  ::pedsim_msgs::AgentForce_<ContainerAllocator>  _forces_type;
  _forces_type forces;




  static const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  TYPE_STANDING;
  static const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  TYPE_INDIVIDUAL_MOVING;
  static const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  TYPE_WAITING_IN_QUEUE;
  static const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  TYPE_GROUP_MOVING;

  typedef boost::shared_ptr< ::pedsim_msgs::AgentState_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::pedsim_msgs::AgentState_<ContainerAllocator> const> ConstPtr;

}; // struct AgentState_

typedef ::pedsim_msgs::AgentState_<std::allocator<void> > AgentState;

typedef boost::shared_ptr< ::pedsim_msgs::AgentState > AgentStatePtr;
typedef boost::shared_ptr< ::pedsim_msgs::AgentState const> AgentStateConstPtr;

// constants requiring out of line definition

   
   template<typename ContainerAllocator> const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > 
      AgentState_<ContainerAllocator>::TYPE_STANDING =
        
          "\"standing\""
        
        ;
   

   
   template<typename ContainerAllocator> const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > 
      AgentState_<ContainerAllocator>::TYPE_INDIVIDUAL_MOVING =
        
          "\"individual_moving\""
        
        ;
   

   
   template<typename ContainerAllocator> const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > 
      AgentState_<ContainerAllocator>::TYPE_WAITING_IN_QUEUE =
        
          "\"waiting_in_queue\""
        
        ;
   

   
   template<typename ContainerAllocator> const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > 
      AgentState_<ContainerAllocator>::TYPE_GROUP_MOVING =
        
          "\"group_moving\""
        
        ;
   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::pedsim_msgs::AgentState_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::pedsim_msgs::AgentState_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace pedsim_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': True}
// {'nav_msgs': ['/opt/ros/melodic/share/nav_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/melodic/share/std_msgs/cmake/../msg'], 'actionlib_msgs': ['/opt/ros/melodic/share/actionlib_msgs/cmake/../msg'], 'sensor_msgs': ['/opt/ros/melodic/share/sensor_msgs/cmake/../msg'], 'pedsim_msgs': ['/home/peterpark/catkin_ws/src/pedsim_ros/pedsim_msgs/msg'], 'geometry_msgs': ['/opt/ros/melodic/share/geometry_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::pedsim_msgs::AgentState_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::pedsim_msgs::AgentState_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::pedsim_msgs::AgentState_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::pedsim_msgs::AgentState_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::pedsim_msgs::AgentState_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::pedsim_msgs::AgentState_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::pedsim_msgs::AgentState_<ContainerAllocator> >
{
  static const char* value()
  {
    return "b47b93bd58ccba0e6f058fd6a71a4915";
  }

  static const char* value(const ::pedsim_msgs::AgentState_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xb47b93bd58ccba0eULL;
  static const uint64_t static_value2 = 0x6f058fd6a71a4915ULL;
};

template<class ContainerAllocator>
struct DataType< ::pedsim_msgs::AgentState_<ContainerAllocator> >
{
  static const char* value()
  {
    return "pedsim_msgs/AgentState";
  }

  static const char* value(const ::pedsim_msgs::AgentState_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::pedsim_msgs::AgentState_<ContainerAllocator> >
{
  static const char* value()
  {
    return "Header header\n\
uint64 id\n\
uint16 type\n\
string social_state\n\
geometry_msgs/Pose pose\n\
geometry_msgs/Twist twist\n\
pedsim_msgs/AgentForce forces\n\
\n\
# Use sensors package to control observability\n\
\n\
# Social State string constants\n\
string      TYPE_STANDING = \"standing\"\n\
string      TYPE_INDIVIDUAL_MOVING = \"individual_moving\"\n\
string      TYPE_WAITING_IN_QUEUE = \"waiting_in_queue\"\n\
string      TYPE_GROUP_MOVING = \"group_moving\"\n\
\n\
\n\
# Agent types\n\
# 0, 1 -> ordinary agents\n\
# 2 -> Robot\n\
# 3 -> standing/elderly agents\n\
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
MSG: geometry_msgs/Pose\n\
# A representation of pose in free space, composed of position and orientation. \n\
Point position\n\
Quaternion orientation\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Point\n\
# This contains the position of a point in free space\n\
float64 x\n\
float64 y\n\
float64 z\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Quaternion\n\
# This represents an orientation in free space in quaternion form.\n\
\n\
float64 x\n\
float64 y\n\
float64 z\n\
float64 w\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Twist\n\
# This expresses velocity in free space broken into its linear and angular parts.\n\
Vector3  linear\n\
Vector3  angular\n\
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
MSG: pedsim_msgs/AgentForce\n\
# Forces acting on an agent.\n\
\n\
# Basic SFM forces.\n\
geometry_msgs/Vector3 desired_force\n\
geometry_msgs/Vector3 obstacle_force\n\
geometry_msgs/Vector3 social_force\n\
\n\
# Additional Group Forces\n\
geometry_msgs/Vector3 group_coherence_force\n\
geometry_msgs/Vector3 group_gaze_force\n\
geometry_msgs/Vector3 group_repulsion_force\n\
\n\
# Extra stabilization/custom forces.\n\
geometry_msgs/Vector3 random_force\n\
";
  }

  static const char* value(const ::pedsim_msgs::AgentState_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::pedsim_msgs::AgentState_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.id);
      stream.next(m.type);
      stream.next(m.social_state);
      stream.next(m.pose);
      stream.next(m.twist);
      stream.next(m.forces);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct AgentState_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::pedsim_msgs::AgentState_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::pedsim_msgs::AgentState_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "id: ";
    Printer<uint64_t>::stream(s, indent + "  ", v.id);
    s << indent << "type: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.type);
    s << indent << "social_state: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.social_state);
    s << indent << "pose: ";
    s << std::endl;
    Printer< ::geometry_msgs::Pose_<ContainerAllocator> >::stream(s, indent + "  ", v.pose);
    s << indent << "twist: ";
    s << std::endl;
    Printer< ::geometry_msgs::Twist_<ContainerAllocator> >::stream(s, indent + "  ", v.twist);
    s << indent << "forces: ";
    s << std::endl;
    Printer< ::pedsim_msgs::AgentForce_<ContainerAllocator> >::stream(s, indent + "  ", v.forces);
  }
};

} // namespace message_operations
} // namespace ros

#endif // PEDSIM_MSGS_MESSAGE_AGENTSTATE_H
