# generated from rosidl_generator_py/resource/_idl.py.em
# with input from tku_msgs:msg/SaveMotion.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'motionlist'
# Member 'motordata'
import array  # noqa: E402, I100

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SaveMotion(type):
    """Metaclass of message 'SaveMotion'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('tku_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'tku_msgs.msg.SaveMotion')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__save_motion
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__save_motion
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__save_motion
            cls._TYPE_SUPPORT = module.type_support_msg__msg__save_motion
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__save_motion

            from std_msgs.msg import MultiArrayLayout
            if MultiArrayLayout.__class__._TYPE_SUPPORT is None:
                MultiArrayLayout.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SaveMotion(metaclass=Metaclass_SaveMotion):
    """Message class 'SaveMotion'."""

    __slots__ = [
        '_layout',
        '_name',
        '_motionstate',
        '_id',
        '_savestate',
        '_saveflag',
        '_motionlist',
        '_motordata',
    ]

    _fields_and_field_types = {
        'layout': 'std_msgs/MultiArrayLayout',
        'name': 'string',
        'motionstate': 'int16',
        'id': 'int16',
        'savestate': 'int16',
        'saveflag': 'boolean',
        'motionlist': 'sequence<int16>',
        'motordata': 'sequence<int16>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'MultiArrayLayout'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('int16')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('int16')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import MultiArrayLayout
        self.layout = kwargs.get('layout', MultiArrayLayout())
        self.name = kwargs.get('name', str())
        self.motionstate = kwargs.get('motionstate', int())
        self.id = kwargs.get('id', int())
        self.savestate = kwargs.get('savestate', int())
        self.saveflag = kwargs.get('saveflag', bool())
        self.motionlist = array.array('h', kwargs.get('motionlist', []))
        self.motordata = array.array('h', kwargs.get('motordata', []))

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.layout != other.layout:
            return False
        if self.name != other.name:
            return False
        if self.motionstate != other.motionstate:
            return False
        if self.id != other.id:
            return False
        if self.savestate != other.savestate:
            return False
        if self.saveflag != other.saveflag:
            return False
        if self.motionlist != other.motionlist:
            return False
        if self.motordata != other.motordata:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def layout(self):
        """Message field 'layout'."""
        return self._layout

    @layout.setter
    def layout(self, value):
        if __debug__:
            from std_msgs.msg import MultiArrayLayout
            assert \
                isinstance(value, MultiArrayLayout), \
                "The 'layout' field must be a sub message of type 'MultiArrayLayout'"
        self._layout = value

    @builtins.property
    def name(self):
        """Message field 'name'."""
        return self._name

    @name.setter
    def name(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'name' field must be of type 'str'"
        self._name = value

    @builtins.property
    def motionstate(self):
        """Message field 'motionstate'."""
        return self._motionstate

    @motionstate.setter
    def motionstate(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'motionstate' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'motionstate' field must be an integer in [-32768, 32767]"
        self._motionstate = value

    @builtins.property  # noqa: A003
    def id(self):  # noqa: A003
        """Message field 'id'."""
        return self._id

    @id.setter  # noqa: A003
    def id(self, value):  # noqa: A003
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'id' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'id' field must be an integer in [-32768, 32767]"
        self._id = value

    @builtins.property
    def savestate(self):
        """Message field 'savestate'."""
        return self._savestate

    @savestate.setter
    def savestate(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'savestate' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'savestate' field must be an integer in [-32768, 32767]"
        self._savestate = value

    @builtins.property
    def saveflag(self):
        """Message field 'saveflag'."""
        return self._saveflag

    @saveflag.setter
    def saveflag(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'saveflag' field must be of type 'bool'"
        self._saveflag = value

    @builtins.property
    def motionlist(self):
        """Message field 'motionlist'."""
        return self._motionlist

    @motionlist.setter
    def motionlist(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'h', \
                "The 'motionlist' array.array() must have the type code of 'h'"
            self._motionlist = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, int) for v in value) and
                 all(val >= -32768 and val < 32768 for val in value)), \
                "The 'motionlist' field must be a set or sequence and each value of type 'int' and each integer in [-32768, 32767]"
        self._motionlist = array.array('h', value)

    @builtins.property
    def motordata(self):
        """Message field 'motordata'."""
        return self._motordata

    @motordata.setter
    def motordata(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'h', \
                "The 'motordata' array.array() must have the type code of 'h'"
            self._motordata = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, int) for v in value) and
                 all(val >= -32768 and val < 32768 for val in value)), \
                "The 'motordata' field must be a set or sequence and each value of type 'int' and each integer in [-32768, 32767]"
        self._motordata = array.array('h', value)
