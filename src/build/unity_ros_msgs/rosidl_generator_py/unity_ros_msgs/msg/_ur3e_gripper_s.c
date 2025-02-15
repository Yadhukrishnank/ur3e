// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from unity_ros_msgs:msg/UR3eGripper.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "unity_ros_msgs/msg/detail/ur3e_gripper__struct.h"
#include "unity_ros_msgs/msg/detail/ur3e_gripper__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool unity_ros_msgs__msg__ur3e_gripper__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[45];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("unity_ros_msgs.msg._ur3e_gripper.UR3eGripper", full_classname_dest, 44) == 0);
  }
  unity_ros_msgs__msg__UR3eGripper * ros_message = _ros_message;
  {  // gripper
    PyObject * field = PyObject_GetAttrString(_pymsg, "gripper");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->gripper = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * unity_ros_msgs__msg__ur3e_gripper__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of UR3eGripper */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("unity_ros_msgs.msg._ur3e_gripper");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "UR3eGripper");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  unity_ros_msgs__msg__UR3eGripper * ros_message = (unity_ros_msgs__msg__UR3eGripper *)raw_ros_message;
  {  // gripper
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->gripper);
    {
      int rc = PyObject_SetAttrString(_pymessage, "gripper", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
