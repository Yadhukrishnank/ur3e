# generated from rosidl_generator_py/resource/_idl.py.em
# with input from unity_ros_msgs:srv/UrMoverService.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_UrMoverService_Request(type):
    """Metaclass of message 'UrMoverService_Request'."""

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
            module = import_type_support('unity_ros_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'unity_ros_msgs.srv.UrMoverService_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__ur_mover_service__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__ur_mover_service__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__ur_mover_service__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__ur_mover_service__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__ur_mover_service__request

            from geometry_msgs.msg import Pose
            if Pose.__class__._TYPE_SUPPORT is None:
                Pose.__class__.__import_type_support__()

            from unity_ros_msgs.msg import UR3eMoveitJoints
            if UR3eMoveitJoints.__class__._TYPE_SUPPORT is None:
                UR3eMoveitJoints.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class UrMoverService_Request(metaclass=Metaclass_UrMoverService_Request):
    """Message class 'UrMoverService_Request'."""

    __slots__ = [
        '_joints_input',
        '_pick_pose',
    ]

    _fields_and_field_types = {
        'joints_input': 'unity_ros_msgs/UR3eMoveitJoints',
        'pick_pose': 'geometry_msgs/Pose',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['unity_ros_msgs', 'msg'], 'UR3eMoveitJoints'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Pose'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from unity_ros_msgs.msg import UR3eMoveitJoints
        self.joints_input = kwargs.get('joints_input', UR3eMoveitJoints())
        from geometry_msgs.msg import Pose
        self.pick_pose = kwargs.get('pick_pose', Pose())

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
        if self.joints_input != other.joints_input:
            return False
        if self.pick_pose != other.pick_pose:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def joints_input(self):
        """Message field 'joints_input'."""
        return self._joints_input

    @joints_input.setter
    def joints_input(self, value):
        if __debug__:
            from unity_ros_msgs.msg import UR3eMoveitJoints
            assert \
                isinstance(value, UR3eMoveitJoints), \
                "The 'joints_input' field must be a sub message of type 'UR3eMoveitJoints'"
        self._joints_input = value

    @builtins.property
    def pick_pose(self):
        """Message field 'pick_pose'."""
        return self._pick_pose

    @pick_pose.setter
    def pick_pose(self, value):
        if __debug__:
            from geometry_msgs.msg import Pose
            assert \
                isinstance(value, Pose), \
                "The 'pick_pose' field must be a sub message of type 'Pose'"
        self._pick_pose = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_UrMoverService_Response(type):
    """Metaclass of message 'UrMoverService_Response'."""

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
            module = import_type_support('unity_ros_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'unity_ros_msgs.srv.UrMoverService_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__ur_mover_service__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__ur_mover_service__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__ur_mover_service__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__ur_mover_service__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__ur_mover_service__response

            from moveit_msgs.msg import RobotTrajectory
            if RobotTrajectory.__class__._TYPE_SUPPORT is None:
                RobotTrajectory.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class UrMoverService_Response(metaclass=Metaclass_UrMoverService_Response):
    """Message class 'UrMoverService_Response'."""

    __slots__ = [
        '_trajectories',
    ]

    _fields_and_field_types = {
        'trajectories': 'sequence<moveit_msgs/RobotTrajectory>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['moveit_msgs', 'msg'], 'RobotTrajectory')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.trajectories = kwargs.get('trajectories', [])

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
        if self.trajectories != other.trajectories:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def trajectories(self):
        """Message field 'trajectories'."""
        return self._trajectories

    @trajectories.setter
    def trajectories(self, value):
        if __debug__:
            from moveit_msgs.msg import RobotTrajectory
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
                 all(isinstance(v, RobotTrajectory) for v in value) and
                 True), \
                "The 'trajectories' field must be a set or sequence and each value of type 'RobotTrajectory'"
        self._trajectories = value


class Metaclass_UrMoverService(type):
    """Metaclass of service 'UrMoverService'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('unity_ros_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'unity_ros_msgs.srv.UrMoverService')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__ur_mover_service

            from unity_ros_msgs.srv import _ur_mover_service
            if _ur_mover_service.Metaclass_UrMoverService_Request._TYPE_SUPPORT is None:
                _ur_mover_service.Metaclass_UrMoverService_Request.__import_type_support__()
            if _ur_mover_service.Metaclass_UrMoverService_Response._TYPE_SUPPORT is None:
                _ur_mover_service.Metaclass_UrMoverService_Response.__import_type_support__()


class UrMoverService(metaclass=Metaclass_UrMoverService):
    from unity_ros_msgs.srv._ur_mover_service import UrMoverService_Request as Request
    from unity_ros_msgs.srv._ur_mover_service import UrMoverService_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
