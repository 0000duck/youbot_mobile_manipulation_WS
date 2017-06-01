# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from segmentation_srv_definitions/MS_segmentRequest.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct

import std_msgs.msg
import sensor_msgs.msg

class MS_segmentRequest(genpy.Message):
  _md5sum = "bb0c6a4d517a84c22628c95a7a7694e0"
  _type = "segmentation_srv_definitions/MS_segmentRequest"
  _has_header = False #flag to mark the presence of a Header object
  _full_text = """sensor_msgs/PointCloud2 cloud
std_msgs/Int32 max_mt
std_msgs/Bool refinement
std_msgs/Float32 nyu
std_msgs/Float32 lambda
std_msgs/Float32 sv_seed
std_msgs/Float32 sv_res
std_msgs/Bool use_SLIC

================================================================================
MSG: sensor_msgs/PointCloud2
# This message holds a collection of N-dimensional points, which may
# contain additional information such as normals, intensity, etc. The
# point data is stored as a binary blob, its layout described by the
# contents of the "fields" array.

# The point cloud data may be organized 2d (image-like) or 1d
# (unordered). Point clouds organized as 2d images may be produced by
# camera depth sensors such as stereo or time-of-flight.

# Time of sensor data acquisition, and the coordinate frame ID (for 3d
# points).
Header header

# 2D structure of the point cloud. If the cloud is unordered, height is
# 1 and width is the length of the point cloud.
uint32 height
uint32 width

# Describes the channels and their layout in the binary data blob.
PointField[] fields

bool    is_bigendian # Is this data bigendian?
uint32  point_step   # Length of a point in bytes
uint32  row_step     # Length of a row in bytes
uint8[] data         # Actual point data, size is (row_step*height)

bool is_dense        # True if there are no invalid points

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

================================================================================
MSG: sensor_msgs/PointField
# This message holds the description of one point entry in the
# PointCloud2 message format.
uint8 INT8    = 1
uint8 UINT8   = 2
uint8 INT16   = 3
uint8 UINT16  = 4
uint8 INT32   = 5
uint8 UINT32  = 6
uint8 FLOAT32 = 7
uint8 FLOAT64 = 8

string name      # Name of field
uint32 offset    # Offset from start of point struct
uint8  datatype  # Datatype enumeration, see above
uint32 count     # How many elements in the field

================================================================================
MSG: std_msgs/Int32
int32 data
================================================================================
MSG: std_msgs/Bool
bool data
================================================================================
MSG: std_msgs/Float32
float32 data"""
  __slots__ = ['cloud','max_mt','refinement','nyu','lambda_','sv_seed','sv_res','use_SLIC']
  _slot_types = ['sensor_msgs/PointCloud2','std_msgs/Int32','std_msgs/Bool','std_msgs/Float32','std_msgs/Float32','std_msgs/Float32','std_msgs/Float32','std_msgs/Bool']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       cloud,max_mt,refinement,nyu,lambda_,sv_seed,sv_res,use_SLIC

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(MS_segmentRequest, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.cloud is None:
        self.cloud = sensor_msgs.msg.PointCloud2()
      if self.max_mt is None:
        self.max_mt = std_msgs.msg.Int32()
      if self.refinement is None:
        self.refinement = std_msgs.msg.Bool()
      if self.nyu is None:
        self.nyu = std_msgs.msg.Float32()
      if self.lambda_ is None:
        self.lambda_ = std_msgs.msg.Float32()
      if self.sv_seed is None:
        self.sv_seed = std_msgs.msg.Float32()
      if self.sv_res is None:
        self.sv_res = std_msgs.msg.Float32()
      if self.use_SLIC is None:
        self.use_SLIC = std_msgs.msg.Bool()
    else:
      self.cloud = sensor_msgs.msg.PointCloud2()
      self.max_mt = std_msgs.msg.Int32()
      self.refinement = std_msgs.msg.Bool()
      self.nyu = std_msgs.msg.Float32()
      self.lambda_ = std_msgs.msg.Float32()
      self.sv_seed = std_msgs.msg.Float32()
      self.sv_res = std_msgs.msg.Float32()
      self.use_SLIC = std_msgs.msg.Bool()

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
      buff.write(_struct_3I.pack(_x.cloud.header.seq, _x.cloud.header.stamp.secs, _x.cloud.header.stamp.nsecs))
      _x = self.cloud.header.frame_id
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      if python3:
        buff.write(struct.pack('<I%sB'%length, length, *_x))
      else:
        buff.write(struct.pack('<I%ss'%length, length, _x))
      _x = self
      buff.write(_struct_2I.pack(_x.cloud.height, _x.cloud.width))
      length = len(self.cloud.fields)
      buff.write(_struct_I.pack(length))
      for val1 in self.cloud.fields:
        _x = val1.name
        length = len(_x)
        if python3 or type(_x) == unicode:
          _x = _x.encode('utf-8')
          length = len(_x)
        if python3:
          buff.write(struct.pack('<I%sB'%length, length, *_x))
        else:
          buff.write(struct.pack('<I%ss'%length, length, _x))
        _x = val1
        buff.write(_struct_IBI.pack(_x.offset, _x.datatype, _x.count))
      _x = self
      buff.write(_struct_B2I.pack(_x.cloud.is_bigendian, _x.cloud.point_step, _x.cloud.row_step))
      _x = self.cloud.data
      length = len(_x)
      # - if encoded as a list instead, serialize as bytes instead of string
      if type(_x) in [list, tuple]:
        buff.write(struct.pack('<I%sB'%length, length, *_x))
      else:
        buff.write(struct.pack('<I%ss'%length, length, _x))
      _x = self
      buff.write(_struct_BiB4fB.pack(_x.cloud.is_dense, _x.max_mt.data, _x.refinement.data, _x.nyu.data, _x.lambda_.data, _x.sv_seed.data, _x.sv_res.data, _x.use_SLIC.data))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    try:
      if self.cloud is None:
        self.cloud = sensor_msgs.msg.PointCloud2()
      if self.max_mt is None:
        self.max_mt = std_msgs.msg.Int32()
      if self.refinement is None:
        self.refinement = std_msgs.msg.Bool()
      if self.nyu is None:
        self.nyu = std_msgs.msg.Float32()
      if self.lambda_ is None:
        self.lambda_ = std_msgs.msg.Float32()
      if self.sv_seed is None:
        self.sv_seed = std_msgs.msg.Float32()
      if self.sv_res is None:
        self.sv_res = std_msgs.msg.Float32()
      if self.use_SLIC is None:
        self.use_SLIC = std_msgs.msg.Bool()
      end = 0
      _x = self
      start = end
      end += 12
      (_x.cloud.header.seq, _x.cloud.header.stamp.secs, _x.cloud.header.stamp.nsecs,) = _struct_3I.unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.cloud.header.frame_id = str[start:end].decode('utf-8')
      else:
        self.cloud.header.frame_id = str[start:end]
      _x = self
      start = end
      end += 8
      (_x.cloud.height, _x.cloud.width,) = _struct_2I.unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.cloud.fields = []
      for i in range(0, length):
        val1 = sensor_msgs.msg.PointField()
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        start = end
        end += length
        if python3:
          val1.name = str[start:end].decode('utf-8')
        else:
          val1.name = str[start:end]
        _x = val1
        start = end
        end += 9
        (_x.offset, _x.datatype, _x.count,) = _struct_IBI.unpack(str[start:end])
        self.cloud.fields.append(val1)
      _x = self
      start = end
      end += 9
      (_x.cloud.is_bigendian, _x.cloud.point_step, _x.cloud.row_step,) = _struct_B2I.unpack(str[start:end])
      self.cloud.is_bigendian = bool(self.cloud.is_bigendian)
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      self.cloud.data = str[start:end]
      _x = self
      start = end
      end += 23
      (_x.cloud.is_dense, _x.max_mt.data, _x.refinement.data, _x.nyu.data, _x.lambda_.data, _x.sv_seed.data, _x.sv_res.data, _x.use_SLIC.data,) = _struct_BiB4fB.unpack(str[start:end])
      self.cloud.is_dense = bool(self.cloud.is_dense)
      self.refinement.data = bool(self.refinement.data)
      self.use_SLIC.data = bool(self.use_SLIC.data)
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
      buff.write(_struct_3I.pack(_x.cloud.header.seq, _x.cloud.header.stamp.secs, _x.cloud.header.stamp.nsecs))
      _x = self.cloud.header.frame_id
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      if python3:
        buff.write(struct.pack('<I%sB'%length, length, *_x))
      else:
        buff.write(struct.pack('<I%ss'%length, length, _x))
      _x = self
      buff.write(_struct_2I.pack(_x.cloud.height, _x.cloud.width))
      length = len(self.cloud.fields)
      buff.write(_struct_I.pack(length))
      for val1 in self.cloud.fields:
        _x = val1.name
        length = len(_x)
        if python3 or type(_x) == unicode:
          _x = _x.encode('utf-8')
          length = len(_x)
        if python3:
          buff.write(struct.pack('<I%sB'%length, length, *_x))
        else:
          buff.write(struct.pack('<I%ss'%length, length, _x))
        _x = val1
        buff.write(_struct_IBI.pack(_x.offset, _x.datatype, _x.count))
      _x = self
      buff.write(_struct_B2I.pack(_x.cloud.is_bigendian, _x.cloud.point_step, _x.cloud.row_step))
      _x = self.cloud.data
      length = len(_x)
      # - if encoded as a list instead, serialize as bytes instead of string
      if type(_x) in [list, tuple]:
        buff.write(struct.pack('<I%sB'%length, length, *_x))
      else:
        buff.write(struct.pack('<I%ss'%length, length, _x))
      _x = self
      buff.write(_struct_BiB4fB.pack(_x.cloud.is_dense, _x.max_mt.data, _x.refinement.data, _x.nyu.data, _x.lambda_.data, _x.sv_seed.data, _x.sv_res.data, _x.use_SLIC.data))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    try:
      if self.cloud is None:
        self.cloud = sensor_msgs.msg.PointCloud2()
      if self.max_mt is None:
        self.max_mt = std_msgs.msg.Int32()
      if self.refinement is None:
        self.refinement = std_msgs.msg.Bool()
      if self.nyu is None:
        self.nyu = std_msgs.msg.Float32()
      if self.lambda_ is None:
        self.lambda_ = std_msgs.msg.Float32()
      if self.sv_seed is None:
        self.sv_seed = std_msgs.msg.Float32()
      if self.sv_res is None:
        self.sv_res = std_msgs.msg.Float32()
      if self.use_SLIC is None:
        self.use_SLIC = std_msgs.msg.Bool()
      end = 0
      _x = self
      start = end
      end += 12
      (_x.cloud.header.seq, _x.cloud.header.stamp.secs, _x.cloud.header.stamp.nsecs,) = _struct_3I.unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.cloud.header.frame_id = str[start:end].decode('utf-8')
      else:
        self.cloud.header.frame_id = str[start:end]
      _x = self
      start = end
      end += 8
      (_x.cloud.height, _x.cloud.width,) = _struct_2I.unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.cloud.fields = []
      for i in range(0, length):
        val1 = sensor_msgs.msg.PointField()
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        start = end
        end += length
        if python3:
          val1.name = str[start:end].decode('utf-8')
        else:
          val1.name = str[start:end]
        _x = val1
        start = end
        end += 9
        (_x.offset, _x.datatype, _x.count,) = _struct_IBI.unpack(str[start:end])
        self.cloud.fields.append(val1)
      _x = self
      start = end
      end += 9
      (_x.cloud.is_bigendian, _x.cloud.point_step, _x.cloud.row_step,) = _struct_B2I.unpack(str[start:end])
      self.cloud.is_bigendian = bool(self.cloud.is_bigendian)
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      self.cloud.data = str[start:end]
      _x = self
      start = end
      end += 23
      (_x.cloud.is_dense, _x.max_mt.data, _x.refinement.data, _x.nyu.data, _x.lambda_.data, _x.sv_seed.data, _x.sv_res.data, _x.use_SLIC.data,) = _struct_BiB4fB.unpack(str[start:end])
      self.cloud.is_dense = bool(self.cloud.is_dense)
      self.refinement.data = bool(self.refinement.data)
      self.use_SLIC.data = bool(self.use_SLIC.data)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill

_struct_I = genpy.struct_I
_struct_IBI = struct.Struct("<IBI")
_struct_3I = struct.Struct("<3I")
_struct_BiB4fB = struct.Struct("<BiB4fB")
_struct_2I = struct.Struct("<2I")
_struct_B2I = struct.Struct("<B2I")
# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from segmentation_srv_definitions/MS_segmentResponse.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct

import std_msgs.msg

class MS_segmentResponse(genpy.Message):
  _md5sum = "33486b2fa5daf06d318d0c177eb58481"
  _type = "segmentation_srv_definitions/MS_segmentResponse"
  _has_header = False #flag to mark the presence of a Header object
  _full_text = """std_msgs/Int32MultiArray[] clusters_indices


================================================================================
MSG: std_msgs/Int32MultiArray
# Please look at the MultiArrayLayout message definition for
# documentation on all multiarrays.

MultiArrayLayout  layout        # specification of data layout
int32[]           data          # array of data


================================================================================
MSG: std_msgs/MultiArrayLayout
# The multiarray declares a generic multi-dimensional array of a
# particular data type.  Dimensions are ordered from outer most
# to inner most.

MultiArrayDimension[] dim # Array of dimension properties
uint32 data_offset        # padding elements at front of data

# Accessors should ALWAYS be written in terms of dimension stride
# and specified outer-most dimension first.
# 
# multiarray(i,j,k) = data[data_offset + dim_stride[1]*i + dim_stride[2]*j + k]
#
# A standard, 3-channel 640x480 image with interleaved color channels
# would be specified as:
#
# dim[0].label  = "height"
# dim[0].size   = 480
# dim[0].stride = 3*640*480 = 921600  (note dim[0] stride is just size of image)
# dim[1].label  = "width"
# dim[1].size   = 640
# dim[1].stride = 3*640 = 1920
# dim[2].label  = "channel"
# dim[2].size   = 3
# dim[2].stride = 3
#
# multiarray(i,j,k) refers to the ith row, jth column, and kth channel.

================================================================================
MSG: std_msgs/MultiArrayDimension
string label   # label of given dimension
uint32 size    # size of given dimension (in type units)
uint32 stride  # stride of given dimension"""
  __slots__ = ['clusters_indices']
  _slot_types = ['std_msgs/Int32MultiArray[]']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       clusters_indices

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(MS_segmentResponse, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.clusters_indices is None:
        self.clusters_indices = []
    else:
      self.clusters_indices = []

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
      length = len(self.clusters_indices)
      buff.write(_struct_I.pack(length))
      for val1 in self.clusters_indices:
        _v1 = val1.layout
        length = len(_v1.dim)
        buff.write(_struct_I.pack(length))
        for val3 in _v1.dim:
          _x = val3.label
          length = len(_x)
          if python3 or type(_x) == unicode:
            _x = _x.encode('utf-8')
            length = len(_x)
          if python3:
            buff.write(struct.pack('<I%sB'%length, length, *_x))
          else:
            buff.write(struct.pack('<I%ss'%length, length, _x))
          _x = val3
          buff.write(_struct_2I.pack(_x.size, _x.stride))
        buff.write(_struct_I.pack(_v1.data_offset))
        length = len(val1.data)
        buff.write(_struct_I.pack(length))
        pattern = '<%si'%length
        buff.write(struct.pack(pattern, *val1.data))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    try:
      if self.clusters_indices is None:
        self.clusters_indices = None
      end = 0
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.clusters_indices = []
      for i in range(0, length):
        val1 = std_msgs.msg.Int32MultiArray()
        _v2 = val1.layout
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        _v2.dim = []
        for i in range(0, length):
          val3 = std_msgs.msg.MultiArrayDimension()
          start = end
          end += 4
          (length,) = _struct_I.unpack(str[start:end])
          start = end
          end += length
          if python3:
            val3.label = str[start:end].decode('utf-8')
          else:
            val3.label = str[start:end]
          _x = val3
          start = end
          end += 8
          (_x.size, _x.stride,) = _struct_2I.unpack(str[start:end])
          _v2.dim.append(val3)
        start = end
        end += 4
        (_v2.data_offset,) = _struct_I.unpack(str[start:end])
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        pattern = '<%si'%length
        start = end
        end += struct.calcsize(pattern)
        val1.data = struct.unpack(pattern, str[start:end])
        self.clusters_indices.append(val1)
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
      length = len(self.clusters_indices)
      buff.write(_struct_I.pack(length))
      for val1 in self.clusters_indices:
        _v3 = val1.layout
        length = len(_v3.dim)
        buff.write(_struct_I.pack(length))
        for val3 in _v3.dim:
          _x = val3.label
          length = len(_x)
          if python3 or type(_x) == unicode:
            _x = _x.encode('utf-8')
            length = len(_x)
          if python3:
            buff.write(struct.pack('<I%sB'%length, length, *_x))
          else:
            buff.write(struct.pack('<I%ss'%length, length, _x))
          _x = val3
          buff.write(_struct_2I.pack(_x.size, _x.stride))
        buff.write(_struct_I.pack(_v3.data_offset))
        length = len(val1.data)
        buff.write(_struct_I.pack(length))
        pattern = '<%si'%length
        buff.write(val1.data.tostring())
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    try:
      if self.clusters_indices is None:
        self.clusters_indices = None
      end = 0
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.clusters_indices = []
      for i in range(0, length):
        val1 = std_msgs.msg.Int32MultiArray()
        _v4 = val1.layout
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        _v4.dim = []
        for i in range(0, length):
          val3 = std_msgs.msg.MultiArrayDimension()
          start = end
          end += 4
          (length,) = _struct_I.unpack(str[start:end])
          start = end
          end += length
          if python3:
            val3.label = str[start:end].decode('utf-8')
          else:
            val3.label = str[start:end]
          _x = val3
          start = end
          end += 8
          (_x.size, _x.stride,) = _struct_2I.unpack(str[start:end])
          _v4.dim.append(val3)
        start = end
        end += 4
        (_v4.data_offset,) = _struct_I.unpack(str[start:end])
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        pattern = '<%si'%length
        start = end
        end += struct.calcsize(pattern)
        val1.data = numpy.frombuffer(str[start:end], dtype=numpy.int32, count=length)
        self.clusters_indices.append(val1)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill

_struct_I = genpy.struct_I
_struct_2I = struct.Struct("<2I")
class MS_segment(object):
  _type          = 'segmentation_srv_definitions/MS_segment'
  _md5sum = 'a8aa0dde4a2a8f822d91756082ac75f7'
  _request_class  = MS_segmentRequest
  _response_class = MS_segmentResponse
