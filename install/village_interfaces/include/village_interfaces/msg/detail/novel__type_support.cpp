// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from village_interfaces:msg/Novel.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "village_interfaces/msg/detail/novel__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace village_interfaces
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void Novel_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) village_interfaces::msg::Novel(_init);
}

void Novel_fini_function(void * message_memory)
{
  auto typed_message = static_cast<village_interfaces::msg::Novel *>(message_memory);
  typed_message->~Novel();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember Novel_message_member_array[2] = {
  {
    "content",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(village_interfaces::msg::Novel, content),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "image",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<sensor_msgs::msg::Image>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(village_interfaces::msg::Novel, image),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers Novel_message_members = {
  "village_interfaces::msg",  // message namespace
  "Novel",  // message name
  2,  // number of fields
  sizeof(village_interfaces::msg::Novel),
  Novel_message_member_array,  // message members
  Novel_init_function,  // function to initialize message memory (memory has to be allocated)
  Novel_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t Novel_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &Novel_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace village_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<village_interfaces::msg::Novel>()
{
  return &::village_interfaces::msg::rosidl_typesupport_introspection_cpp::Novel_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, village_interfaces, msg, Novel)() {
  return &::village_interfaces::msg::rosidl_typesupport_introspection_cpp::Novel_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
