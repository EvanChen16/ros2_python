# generated from rosidl_generator_py/resource/_idl.py.em
# with input from tku_msgs:msg/SensorSet.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SensorSet(type):
    """Metaclass of message 'SensorSet'."""

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
                'tku_msgs.msg.SensorSet')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__sensor_set
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__sensor_set
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__sensor_set
            cls._TYPE_SUPPORT = module.type_support_msg__msg__sensor_set
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__sensor_set

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SensorSet(metaclass=Metaclass_SensorSet):
    """Message class 'SensorSet'."""

    __slots__ = [
        '_sensor_p',
        '_sensor_i',
        '_sensor_d',
        '_roll',
        '_pitch',
        '_yaw',
        '_sup_f',
        '_nsup_f',
        '_sensor_modeset',
    ]

    _fields_and_field_types = {
        'sensor_p': 'int32',
        'sensor_i': 'int32',
        'sensor_d': 'int32',
        'roll': 'int32',
        'pitch': 'int32',
        'yaw': 'int32',
        'sup_f': 'int32',
        'nsup_f': 'int32',
        'sensor_modeset': 'int32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.sensor_p = kwargs.get('sensor_p', int())
        self.sensor_i = kwargs.get('sensor_i', int())
        self.sensor_d = kwargs.get('sensor_d', int())
        self.roll = kwargs.get('roll', int())
        self.pitch = kwargs.get('pitch', int())
        self.yaw = kwargs.get('yaw', int())
        self.sup_f = kwargs.get('sup_f', int())
        self.nsup_f = kwargs.get('nsup_f', int())
        self.sensor_modeset = kwargs.get('sensor_modeset', int())

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
        if self.sensor_p != other.sensor_p:
            return False
        if self.sensor_i != other.sensor_i:
            return False
        if self.sensor_d != other.sensor_d:
            return False
        if self.roll != other.roll:
            return False
        if self.pitch != other.pitch:
            return False
        if self.yaw != other.yaw:
            return False
        if self.sup_f != other.sup_f:
            return False
        if self.nsup_f != other.nsup_f:
            return False
        if self.sensor_modeset != other.sensor_modeset:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def sensor_p(self):
        """Message field 'sensor_p'."""
        return self._sensor_p

    @sensor_p.setter
    def sensor_p(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'sensor_p' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'sensor_p' field must be an integer in [-2147483648, 2147483647]"
        self._sensor_p = value

    @builtins.property
    def sensor_i(self):
        """Message field 'sensor_i'."""
        return self._sensor_i

    @sensor_i.setter
    def sensor_i(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'sensor_i' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'sensor_i' field must be an integer in [-2147483648, 2147483647]"
        self._sensor_i = value

    @builtins.property
    def sensor_d(self):
        """Message field 'sensor_d'."""
        return self._sensor_d

    @sensor_d.setter
    def sensor_d(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'sensor_d' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'sensor_d' field must be an integer in [-2147483648, 2147483647]"
        self._sensor_d = value

    @builtins.property
    def roll(self):
        """Message field 'roll'."""
        return self._roll

    @roll.setter
    def roll(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'roll' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'roll' field must be an integer in [-2147483648, 2147483647]"
        self._roll = value

    @builtins.property
    def pitch(self):
        """Message field 'pitch'."""
        return self._pitch

    @pitch.setter
    def pitch(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'pitch' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'pitch' field must be an integer in [-2147483648, 2147483647]"
        self._pitch = value

    @builtins.property
    def yaw(self):
        """Message field 'yaw'."""
        return self._yaw

    @yaw.setter
    def yaw(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'yaw' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'yaw' field must be an integer in [-2147483648, 2147483647]"
        self._yaw = value

    @builtins.property
    def sup_f(self):
        """Message field 'sup_f'."""
        return self._sup_f

    @sup_f.setter
    def sup_f(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'sup_f' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'sup_f' field must be an integer in [-2147483648, 2147483647]"
        self._sup_f = value

    @builtins.property
    def nsup_f(self):
        """Message field 'nsup_f'."""
        return self._nsup_f

    @nsup_f.setter
    def nsup_f(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'nsup_f' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'nsup_f' field must be an integer in [-2147483648, 2147483647]"
        self._nsup_f = value

    @builtins.property
    def sensor_modeset(self):
        """Message field 'sensor_modeset'."""
        return self._sensor_modeset

    @sensor_modeset.setter
    def sensor_modeset(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'sensor_modeset' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'sensor_modeset' field must be an integer in [-2147483648, 2147483647]"
        self._sensor_modeset = value
