# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from simu_visual/linear_speed_path.msg. Do not edit."""
import codecs
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct


class linear_speed_path(genpy.Message):
  _md5sum = "c2b4e4cd669bdd0695c7cea0625007b4"
  _type = "simu_visual/linear_speed_path"
  _has_header = False  # flag to mark the presence of a Header object
  _full_text = """float32 qo
float32 qi
float32 vmax_1
float32 amax_1
int64 paso1
int64 paso2
bool ls_run
int64 idcall
"""
  __slots__ = ['qo','qi','vmax_1','amax_1','paso1','paso2','ls_run','idcall']
  _slot_types = ['float32','float32','float32','float32','int64','int64','bool','int64']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       qo,qi,vmax_1,amax_1,paso1,paso2,ls_run,idcall

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(linear_speed_path, self).__init__(*args, **kwds)
      # message fields cannot be None, assign default values for those that are
      if self.qo is None:
        self.qo = 0.
      if self.qi is None:
        self.qi = 0.
      if self.vmax_1 is None:
        self.vmax_1 = 0.
      if self.amax_1 is None:
        self.amax_1 = 0.
      if self.paso1 is None:
        self.paso1 = 0
      if self.paso2 is None:
        self.paso2 = 0
      if self.ls_run is None:
        self.ls_run = False
      if self.idcall is None:
        self.idcall = 0
    else:
      self.qo = 0.
      self.qi = 0.
      self.vmax_1 = 0.
      self.amax_1 = 0.
      self.paso1 = 0
      self.paso2 = 0
      self.ls_run = False
      self.idcall = 0

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
      buff.write(_get_struct_4f2qBq().pack(_x.qo, _x.qi, _x.vmax_1, _x.amax_1, _x.paso1, _x.paso2, _x.ls_run, _x.idcall))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    codecs.lookup_error("rosmsg").msg_type = self._type
    try:
      end = 0
      _x = self
      start = end
      end += 41
      (_x.qo, _x.qi, _x.vmax_1, _x.amax_1, _x.paso1, _x.paso2, _x.ls_run, _x.idcall,) = _get_struct_4f2qBq().unpack(str[start:end])
      self.ls_run = bool(self.ls_run)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill


  def serialize_numpy(self, buff, numpy):
    """
    serialize message with numpy array types into buffer
    :param buff: buffer, ``StringIO``
    :param numpy: numpy python module
    """
    try:
      _x = self
      buff.write(_get_struct_4f2qBq().pack(_x.qo, _x.qi, _x.vmax_1, _x.amax_1, _x.paso1, _x.paso2, _x.ls_run, _x.idcall))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    codecs.lookup_error("rosmsg").msg_type = self._type
    try:
      end = 0
      _x = self
      start = end
      end += 41
      (_x.qo, _x.qi, _x.vmax_1, _x.amax_1, _x.paso1, _x.paso2, _x.ls_run, _x.idcall,) = _get_struct_4f2qBq().unpack(str[start:end])
      self.ls_run = bool(self.ls_run)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_4f2qBq = None
def _get_struct_4f2qBq():
    global _struct_4f2qBq
    if _struct_4f2qBq is None:
        _struct_4f2qBq = struct.Struct("<4f2qBq")
    return _struct_4f2qBq
