# generated from rosidl_generator_py/resource/_idl.py.em
# with input from village_interfaces:srv/SellNovel.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SellNovel_Request(type):
    """Metaclass of message 'SellNovel_Request'."""

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
            module = import_type_support('village_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'village_interfaces.srv.SellNovel_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__sell_novel__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__sell_novel__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__sell_novel__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__sell_novel__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__sell_novel__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SellNovel_Request(metaclass=Metaclass_SellNovel_Request):
    """Message class 'SellNovel_Request'."""

    __slots__ = [
        '_money',
    ]

    _fields_and_field_types = {
        'money': 'uint32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.money = kwargs.get('money', int())

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
        if self.money != other.money:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def money(self):
        """Message field 'money'."""
        return self._money

    @money.setter
    def money(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'money' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'money' field must be an unsigned integer in [0, 4294967295]"
        self._money = value


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_SellNovel_Response(type):
    """Metaclass of message 'SellNovel_Response'."""

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
            module = import_type_support('village_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'village_interfaces.srv.SellNovel_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__sell_novel__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__sell_novel__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__sell_novel__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__sell_novel__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__sell_novel__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SellNovel_Response(metaclass=Metaclass_SellNovel_Response):
    """Message class 'SellNovel_Response'."""

    __slots__ = [
        '_novels',
    ]

    _fields_and_field_types = {
        'novels': 'sequence<string>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.UnboundedString()),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.novels = kwargs.get('novels', [])

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
        if self.novels != other.novels:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def novels(self):
        """Message field 'novels'."""
        return self._novels

    @novels.setter
    def novels(self, value):
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
                 all(isinstance(v, str) for v in value) and
                 True), \
                "The 'novels' field must be a set or sequence and each value of type 'str'"
        self._novels = value


class Metaclass_SellNovel(type):
    """Metaclass of service 'SellNovel'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('village_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'village_interfaces.srv.SellNovel')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__sell_novel

            from village_interfaces.srv import _sell_novel
            if _sell_novel.Metaclass_SellNovel_Request._TYPE_SUPPORT is None:
                _sell_novel.Metaclass_SellNovel_Request.__import_type_support__()
            if _sell_novel.Metaclass_SellNovel_Response._TYPE_SUPPORT is None:
                _sell_novel.Metaclass_SellNovel_Response.__import_type_support__()


class SellNovel(metaclass=Metaclass_SellNovel):
    from village_interfaces.srv._sell_novel import SellNovel_Request as Request
    from village_interfaces.srv._sell_novel import SellNovel_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
