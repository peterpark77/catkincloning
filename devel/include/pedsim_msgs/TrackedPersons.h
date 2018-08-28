// Generated by gencpp from file pedsim_msgs/TrackedPersons.msg
// DO NOT EDIT!


#ifndef PEDSIM_MSGS_MESSAGE_TRACKEDPERSONS_H
#define PEDSIM_MSGS_MESSAGE_TRACKEDPERSONS_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <pedsim_msgs/TrackedPerson.h>

namespace pedsim_msgs
{
template <class ContainerAllocator>
struct TrackedPersons_
{
  typedef TrackedPersons_<ContainerAllocator> Type;

  TrackedPersons_()
    : header()
    , tracks()  {
    }
  TrackedPersons_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , tracks(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef std::vector< ::pedsim_msgs::TrackedPerson_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::pedsim_msgs::TrackedPerson_<ContainerAllocator> >::other >  _tracks_type;
  _tracks_type tracks;





  typedef boost::shared_ptr< ::pedsim_msgs::TrackedPersons_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::pedsim_msgs::TrackedPersons_<ContainerAllocator> const> ConstPtr;

}; // struct TrackedPersons_

typedef ::pedsim_msgs::TrackedPersons_<std::allocator<void> > TrackedPersons;

typedef boost::shared_ptr< ::pedsim_msgs::TrackedPersons > TrackedPersonsPtr;
typedef boost::shared_ptr< ::pedsim_msgs::TrackedPersons const> TrackedPersonsConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::pedsim_msgs::TrackedPersons_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::pedsim_msgs::TrackedPersons_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::pedsim_msgs::TrackedPersons_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::pedsim_msgs::TrackedPersons_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::pedsim_msgs::TrackedPersons_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::pedsim_msgs::TrackedPersons_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::pedsim_msgs::TrackedPersons_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::pedsim_msgs::TrackedPersons_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::pedsim_msgs::TrackedPersons_<ContainerAllocator> >
{
  static const char* value()
  {
    return "21c0b1a57c4933e68f39aa3802861828";
  }

  static const char* value(const ::pedsim_msgs::TrackedPersons_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x21c0b1a57c4933e6ULL;
  static const uint64_t static_value2 = 0x8f39aa3802861828ULL;
};

template<class ContainerAllocator>
struct DataType< ::pedsim_msgs::TrackedPersons_<ContainerAllocator> >
{
  static const char* value()
  {
    return "pedsim_msgs/TrackedPersons";
  }

  static const char* value(const ::pedsim_msgs::TrackedPersons_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::pedsim_msgs::TrackedPersons_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# Message with all currently tracked persons \n\
#\n\
\n\
Header              header      # Header containing timestamp etc. of this message\n\
TrackedPerson[]     tracks      # All persons that are currently being tracked\n\
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
MSG: pedsim_msgs/TrackedPerson\n\
# Message defining a tracked person\n\
#\n\
\n\
uint64      track_id        # unique identifier of the target, consistent over time\n\
bool        is_occluded     # if the track is currently not observable in a physical way\n\
bool        is_matched      # if the track is currently matched by a detection\n\
uint64      detection_id    # id of the corresponding detection in the current cycle (undefined if occluded)\n\
duration    age             # age of the track\n\
\n\
# The following fields are extracted from the Kalman state x and its covariance C\n\
\n\
geometry_msgs/PoseWithCovariance       pose   # pose of the track (z value and orientation might not be set, check if corresponding variance on diagonal is > 99999)\n\
\n\
geometry_msgs/TwistWithCovariance   twist     # velocity of the track (z value and rotational velocities might not be set, check if corresponding variance on diagonal is > 99999)\n\
\n\
================================================================================\n\
MSG: geometry_msgs/PoseWithCovariance\n\
# This represents a pose in free space with uncertainty.\n\
\n\
Pose pose\n\
\n\
# Row-major representation of the 6x6 covariance matrix\n\
# The orientation parameters use a fixed-axis representation.\n\
# In order, the parameters are:\n\
# (x, y, z, rotation about X axis, rotation about Y axis, rotation about Z axis)\n\
float64[36] covariance\n\
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
MSG: geometry_msgs/TwistWithCovariance\n\
# This expresses velocity in free space with uncertainty.\n\
\n\
Twist twist\n\
\n\
# Row-major representation of the 6x6 covariance matrix\n\
# The orientation parameters use a fixed-axis representation.\n\
# In order, the parameters are:\n\
# (x, y, z, rotation about X axis, rotation about Y axis, rotation about Z axis)\n\
float64[36] covariance\n\
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
";
  }

  static const char* value(const ::pedsim_msgs::TrackedPersons_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::pedsim_msgs::TrackedPersons_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.tracks);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct TrackedPersons_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::pedsim_msgs::TrackedPersons_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::pedsim_msgs::TrackedPersons_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "tracks[]" << std::endl;
    for (size_t i = 0; i < v.tracks.size(); ++i)
    {
      s << indent << "  tracks[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::pedsim_msgs::TrackedPerson_<ContainerAllocator> >::stream(s, indent + "    ", v.tracks[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // PEDSIM_MSGS_MESSAGE_TRACKEDPERSONS_H
