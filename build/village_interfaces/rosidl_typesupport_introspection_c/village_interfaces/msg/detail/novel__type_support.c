// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from village_interfaces:msg/Novel.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "village_interfaces/msg/detail/novel__rosidl_typesupport_introspection_c.h"
#include "village_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "village_interfaces/msg/detail/novel__functions.h"
#include "village_interfaces/msg/detail/novel__struct.h"


// Include directives for member types
// Member `content`
#include "rosidl_runtime_c/string_functions.h"
// Member `image`
#include "sensor_msgs/msg/image.h"
// Member `image`
#include "sensor_msgs/msg/detail/image__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void Novel__rosidl_typesupport_introspection_c__Novel_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  village_interfaces__msg__Novel__init(message_memory);
}

void Novel__rosidl_typesupport_introspection_c__Novel_fini_function(void * message_memory)
{
  village_interfaces__msg__Novel__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Novel__rosidl_typesupport_introspection_c__Novel_message_member_array[2] = {
  {
    "content",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(village_interfaces__msg__Novel, content),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "image",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(village_interfaces__msg__Novel, image),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Novel__rosidl_typesupport_introspection_c__Novel_message_members = {
  "village_interfaces__msg",  // message namespace
  "Novel",  // message name
  2,  // number of fields
  sizeof(village_interfaces__msg__Novel),
  Novel__rosidl_typesupport_introspection_c__Novel_message_member_array,  // message members
  Novel__rosidl_typesupport_introspection_c__Novel_init_function,  // function to initialize message memory (memory has to be allocated)
  Novel__rosidl_typesupport_introspection_c__Novel_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Novel__rosidl_typesupport_introspection_c__Novel_message_type_support_handle = {
  0,
  &Novel__rosidl_typesupport_introspection_c__Novel_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_village_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, village_interfaces, msg, Novel)() {
  Novel__rosidl_typesupport_introspection_c__Novel_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sensor_msgs, msg, Image)();
  if (!Novel__rosidl_typesupport_introspection_c__Novel_message_type_support_handle.typesupport_identifier) {
    Novel__rosidl_typesupport_introspection_c__Novel_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Novel__rosidl_typesupport_introspection_c__Novel_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
