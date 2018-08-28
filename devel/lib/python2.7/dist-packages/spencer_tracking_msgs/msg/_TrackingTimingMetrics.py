# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from spencer_tracking_msgs/TrackingTimingMetrics.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct

import std_msgs.msg

class TrackingTimingMetrics(genpy.Message):
  _md5sum = "e5e4499959c0302da5d8864744a1d65a"
  _type = "spencer_tracking_msgs/TrackingTimingMetrics"
  _has_header = True #flag to mark the presence of a Header object
  _full_text = """# Message with timing values for analyzing the efficency 
#

Header              header                  # Header containing timestamp etc. of this message
uint64              track_count             # number of person currentl tracked
uint64              cycle_no                # incremented number of cycles        
float32             average_cycle_time      # average time for one cycle of tracker
float32             cycle_time              # cycle time of current cycle
float32             average_processing_rate # average frequency of processing data
float32             cpu_load                # current cpu load
float32             average_cpu_load        # average cpu load
float32             elapsed_time            # elapsed seconds since start
float32             elapsed_cpu_time        # elapsed cpu time since start
================================================================================
MSG: std_msgs/Header
# Standard metadata for higher-level stamped data types.
# This is generally used to communicate timestamped data 
# in a particular coordinate frame.
# 
# sequence ID: consecutively increasing ID 
uint32 seq
#Two-integer timestamp that is expressed as:
# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')
# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')
# time-handling sugar is provided by the client library
time stamp
#Frame this data is associated with
# 0: no frame
# 1: global frame
string frame_id
"""
  __slots__ = ['header','track_count','cycle_no','average_cycle_time','cycle_time','average_processing_rate','cpu_load','average_cpu_load','elapsed_time','elapsed_cpu_time']
  _slot_types = ['std_msgs/Header','uint64','uint64','float32','float32','float32','float32','float32','float32','float32']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       header,track_count,cycle_no,average_cycle_time,cycle_time,average_processing_rate,cpu_load,average_cpu_load,elapsed_time,elapsed_cpu_time

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(TrackingTimingMetrics, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.header is None:
        self.header = std_msgs.msg.Header()
      if self.track_count is None:
        self.track_count = 0
      if self.cycle_no is None:
        self.cycle_no = 0
      if self.average_cycle_time is None:
        self.average_cycle_time = 0.
      if self.cycle_time is None:
        self.cycle_time = 0.
      if self.average_processing_rate is None:
        self.average_processing_rate = 0.
      if self.cpu_load is None:
        self.cpu_load = 0.
      if self.average_cpu_load is None:
        self.average_cpu_load = 0.
      if self.elapsed_time is None:
        self.elapsed_time = 0.
      if self.elapsed_cpu_time is None:
        self.elapsed_cpu_time = 0.
    else:
      self.header = std_msgs.msg.Header()
      self.track_count = 0
      self.cycle_no = 0
      self.average_cycle_time = 0.
      self.cycle_time = 0.
      self.average_processing_rate = 0.
      self.cpu_load = 0.
      self.average_cpu_load = 0.
      self.elapsed_time = 0.
      self.elapsed_cpu_time = 0.

  def _get_types(self):
    """
    internal API method
    """
    return self._slot_types

  def serialize(self, buff):
    """
    serialize message into buffer
    :param buff: buffer, ``StringIO``
    """
    try:
      _x = self
      buff.write(_get_struct_3I().pack(_x.header.seq, _x.header.stamp.secs, _x.header.stamp.nsecs))
      _x = self.header.frame_id
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.pack('<I%ss'%length, length, _x))
      _x = self
      buff.write(_get_struct_2Q7f().pack(_x.track_count, _x.cycle_no, _x.average_cycle_time, _x.cycle_time, _x.average_processing_rate, _x.cpu_load, _x.average_cpu_load, _x.elapsed_time, _x.elapsed_cpu_time))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    try:
      if self.header is None:
        self.header = std_msgs.msg.Header()
      end = 0
      _x = self
      start = end
      end += 12
      (_x.header.seq, _x.header.stamp.secs, _x.header.stamp.nsecs,) = _get_struct_3I().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.header.frame_id = str[start:end].decode('utf-8')
      else:
        self.header.frame_id = str[start:end]
      _x = self
      start = end
      end += 44
      (_x.track_count, _x.cycle_no, _x.average_cycle_time, _x.cycle_time, _x.average_processing_rate, _x.cpu_load, _x.average_cpu_load, _x.elapsed_time, _x.elapsed_cpu_time,) = _get_struct_2Q7f().unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill


  def serialize_numpy(self, buff, numpy):
    """
    serialize message with numpy array types into buffer
    :param buff: buffer, ``StringIO``
    :param numpy: numpy python module
    """
    try:
      _x = self
      buff.write(_get_struct_3I().pack(_x.header.seq, _x.header.stamp.secs, _x.header.stamp.nsecs))
      _x = self.header.frame_id
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.pack('<I%ss'%length, length, _x))
      _x = self
      buff.write(_get_struct_2Q7f().pack(_x.track_count, _x.cycle_no, _x.average_cycle_time, _x.cycle_time, _x.average_processing_rate, _x.cpu_load, _x.average_cpu_load, _x.elapsed_time, _x.elapsed_cpu_time))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    try:
      if self.header is None:
        self.header = std_msgs.msg.Header()
      end = 0
      _x = self
      start = end
      end += 12
      (_x.header.seq, _x.header.stamp.secs, _x.header.stamp.nsecs,) = _get_struct_3I().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.header.frame_id = str[start:end].decode('utf-8')
      else:
        self.header.frame_id = str[start:end]
      _x = self
      start = end
      end += 44
      (_x.track_count, _x.cycle_no, _x.average_cycle_time, _x.cycle_time, _x.average_processing_rate, _x.cpu_load, _x.average_cpu_load, _x.elapsed_time, _x.elapsed_cpu_time,) = _get_struct_2Q7f().unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_3I = None
def _get_struct_3I():
    global _struct_3I
    if _struct_3I is None:
        _struct_3I = struct.Struct("<3I")
    return _struct_3I
_struct_2Q7f = None
def _get_struct_2Q7f():
    global _struct_2Q7f
    if _struct_2Q7f is None:
        _struct_2Q7f = struct.Struct("<2Q7f")
    return _struct_2Q7f
