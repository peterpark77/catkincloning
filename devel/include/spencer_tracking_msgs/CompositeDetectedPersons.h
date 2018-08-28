// Generated by gencpp from file spencer_tracking_msgs/CompositeDetectedPersons.msg
// DO NOT EDIT!


#ifndef SPENCER_TRACKING_MSGS_MESSAGE_COMPOSITEDETECTEDPERSONS_H
#define SPENCER_TRACKING_MSGS_MESSAGE_COMPOSITEDETECTEDPERSONS_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <spencer_tracking_msgs/CompositeDetectedPerson.h>

namespace spencer_tracking_msgs
{
template <class ContainerAllocator>
struct CompositeDetectedPersons_
{
  typedef CompositeDetectedPersons_<ContainerAllocator> Type;

  CompositeDetectedPersons_()
    : header()
    , elements()  {
    }
  CompositeDetectedPersons_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , elements(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef std::vector< ::spencer_tracking_msgs::CompositeDetectedPerson_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::spencer_tracking_msgs::CompositeDetectedPerson_<ContainerAllocator> >::other >  _elements_type;
  _elements_type elements;





  typedef boost::shared_ptr< ::spencer_tracking_msgs::CompositeDetectedPersons_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::spencer_tracking_msgs::CompositeDetectedPersons_<ContainerAllocator> const> ConstPtr;

}; // struct CompositeDetectedPersons_

typedef ::spencer_tracking_msgs::CompositeDetectedPersons_<std::allocator<void> > CompositeDetectedPersons;

typedef boost::shared_ptr< ::spencer_tracking_msgs::CompositeDetectedPersons > CompositeDetectedPersonsPtr;
typedef boost::shared_ptr< ::spencer_tracking_msgs::CompositeDetectedPersons const> CompositeDetectedPersonsConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::spencer_tracking_msgs::CompositeDetectedPersons_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::spencer_tracking_msgs::CompositeDetectedPersons_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace spencer_tracking_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': True}
// {'std_msgs': ['/opt/ros/melodic/share/std_msgs/cmake/../msg'], 'spencer_tracking_msgs': ['/home/peterpark/catkin_ws/src/pedsim_ros/2ndparty/spencer_messages/spencer_tracking_msgs/msg'], 'geometry_msgs': ['/opt/ros/melodic/share/geometry_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::spencer_tracking_msgs::CompositeDetectedPersons_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::spencer_tracking_msgs::CompositeDetectedPersons_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::spencer_tracking_msgs::CompositeDetectedPersons_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::spencer_tracking_msgs::CompositeDetectedPersons_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::spencer_tracking_msgs::CompositeDetectedPersons_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::spencer_tracking_msgs::CompositeDetectedPersons_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::spencer_tracking_msgs::CompositeDetectedPersons_<ContainerAllocator> >
{
  static const char* value()
  {
    return "c4f9f34f5cb712f010de12fc027da3e6";
  }

  static const char* value(const ::spencer_tracking_msgs::CompositeDetectedPersons_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xc4f9f34f5cb712f0ULL;
  static const uint64_t static_value2 = 0x10de12fc027da3e6ULL;
};

template<class ContainerAllocator>
struct DataType< ::spencer_tracking_msgs::CompositeDetectedPersons_<ContainerAllocator> >
{
  static const char* value()
  {
    return "spencer_tracking_msgs/CompositeDetectedPersons";
  }

  static const char* value(const ::spencer_tracking_msgs::CompositeDetectedPersons_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::spencer_tracking_msgs::CompositeDetectedPersons_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# Message specifying which original detected persons (from all kinds of sensors) have been merged into one fused detection before being processed by the person tracker, in the current time step.\n\
#\n\
# This information is processed by the spencer_detected_person_association module, such that other perception components can associate their results (e.g. person age, gender)\n\
# with a particular spencer_tracking_msgs/TrackedPerson (which contains a reference to a composite person detection ID).\n\
\n\
Header                      header          # Header timestamp is set to the *latest* timestamp of all fused DetectedPerson messages.\n\
                                            # Before fusion, all detections are transformed into a common coordinate frame (usually base_footprint).\n\
CompositeDetectedPerson[]   elements        # Fused (merged) detected persons\n\
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
MSG: spencer_tracking_msgs/CompositeDetectedPerson\n\
# Specifies which detected persons have been merged into a composite detection by the spencer_detected_person_association module.\n\
\n\
# TODO: Do we need a composite person-specific timestamp (or even a full message header including frame ID)?\n\
# Having a separate timestamp per person could be useful if the timestamps of the merged DetectedPersons messages vary a lot,\n\
# and some persons are only seen by a single sensor (so averaging over all input timestamps would have a detrimental effect). \n\
\n\
uint64      composite_detection_id          # ID of the fused detection\n\
\n\
float64     mean_confidence                 # mean of the confidences of the original detections\n\
float64     max_confidence                  # maximum confidence of original detections\n\
float64     min_confidence                  # minimum confidence of original detections\n\
\n\
\n\
geometry_msgs/PoseWithCovariance    pose    # Merged 3D pose (position + orientation) of the detection center\n\
                                            # check covariance to see which dimensions are actually set!\n\
                                            # unset dimensions shall have a covariance > 9999\n\
\n\
DetectedPerson[] original_detections        # The original detections from individual sensor-specific detectors that have been combined into a composite detection\n\
                                            # We are copying the entire DetectedPersons messages, *with poses transformed into the target frame*, such that subscribers\n\
                                            # do not have to subscribe to all the original DetectedPersons topics.\n\
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
MSG: spencer_tracking_msgs/DetectedPerson\n\
# Message describing a detection of a person\n\
#\n\
\n\
# Unique id of the detection, monotonically increasing over time\n\
uint64          detection_id\n\
\n\
# (Pseudo-)probabilistic value between 0.0 and 1.0 describing the detector's confidence in the detection\n\
float64         confidence\n\
\n\
# 3D pose (position + orientation) of the *center* of the detection\n\
# check covariance to see which dimensions are actually set! unset dimensions shall have a covariance > 9999\n\
geometry_msgs/PoseWithCovariance    pose    \n\
\n\
# Sensor modality / detector type, see example constants below. \n\
# used e.g. later in tracking to check which tracks have been visually confirmed\n\
string          modality            \n\
\n\
                                    \n\
string          MODALITY_GENERIC_LASER_2D = laser2d\n\
string          MODALITY_GENERIC_LASER_3D = laser3d\n\
string          MODALITY_GENERIC_MONOCULAR_VISION = mono\n\
string          MODALITY_GENERIC_STEREO_VISION = stereo\n\
string          MODALITY_GENERIC_RGBD = rgbd\n\
";
  }

  static const char* value(const ::spencer_tracking_msgs::CompositeDetectedPersons_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::spencer_tracking_msgs::CompositeDetectedPersons_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.elements);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct CompositeDetectedPersons_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::spencer_tracking_msgs::CompositeDetectedPersons_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::spencer_tracking_msgs::CompositeDetectedPersons_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "elements[]" << std::endl;
    for (size_t i = 0; i < v.elements.size(); ++i)
    {
      s << indent << "  elements[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::spencer_tracking_msgs::CompositeDetectedPerson_<ContainerAllocator> >::stream(s, indent + "    ", v.elements[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // SPENCER_TRACKING_MSGS_MESSAGE_COMPOSITEDETECTEDPERSONS_H
