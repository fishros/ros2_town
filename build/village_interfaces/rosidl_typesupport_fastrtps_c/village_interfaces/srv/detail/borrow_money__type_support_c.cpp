// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from village_interfaces:srv/BorrowMoney.idl
// generated code does not contain a copyright notice
#include "village_interfaces/srv/detail/borrow_money__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "village_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "village_interfaces/srv/detail/borrow_money__struct.h"
#include "village_interfaces/srv/detail/borrow_money__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "rosidl_runtime_c/string.h"  // name
#include "rosidl_runtime_c/string_functions.h"  // name

// forward declare type support functions


using _BorrowMoney_Request__ros_msg_type = village_interfaces__srv__BorrowMoney_Request;

static bool _BorrowMoney_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _BorrowMoney_Request__ros_msg_type * ros_message = static_cast<const _BorrowMoney_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: name
  {
    const rosidl_runtime_c__String * str = &ros_message->name;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: money
  {
    cdr << ros_message->money;
  }

  return true;
}

static bool _BorrowMoney_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _BorrowMoney_Request__ros_msg_type * ros_message = static_cast<_BorrowMoney_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: name
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->name.data) {
      rosidl_runtime_c__String__init(&ros_message->name);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->name,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'name'\n");
      return false;
    }
  }

  // Field name: money
  {
    cdr >> ros_message->money;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_village_interfaces
size_t get_serialized_size_village_interfaces__srv__BorrowMoney_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _BorrowMoney_Request__ros_msg_type * ros_message = static_cast<const _BorrowMoney_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name name
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->name.size + 1);
  // field.name money
  {
    size_t item_size = sizeof(ros_message->money);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _BorrowMoney_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_village_interfaces__srv__BorrowMoney_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_village_interfaces
size_t max_serialized_size_village_interfaces__srv__BorrowMoney_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: name
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: money
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _BorrowMoney_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_village_interfaces__srv__BorrowMoney_Request(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_BorrowMoney_Request = {
  "village_interfaces::srv",
  "BorrowMoney_Request",
  _BorrowMoney_Request__cdr_serialize,
  _BorrowMoney_Request__cdr_deserialize,
  _BorrowMoney_Request__get_serialized_size,
  _BorrowMoney_Request__max_serialized_size
};

static rosidl_message_type_support_t _BorrowMoney_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_BorrowMoney_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, village_interfaces, srv, BorrowMoney_Request)() {
  return &_BorrowMoney_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "village_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "village_interfaces/srv/detail/borrow_money__struct.h"
// already included above
// #include "village_interfaces/srv/detail/borrow_money__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _BorrowMoney_Response__ros_msg_type = village_interfaces__srv__BorrowMoney_Response;

static bool _BorrowMoney_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _BorrowMoney_Response__ros_msg_type * ros_message = static_cast<const _BorrowMoney_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: success
  {
    cdr << (ros_message->success ? true : false);
  }

  // Field name: money
  {
    cdr << ros_message->money;
  }

  return true;
}

static bool _BorrowMoney_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _BorrowMoney_Response__ros_msg_type * ros_message = static_cast<_BorrowMoney_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: success
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->success = tmp ? true : false;
  }

  // Field name: money
  {
    cdr >> ros_message->money;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_village_interfaces
size_t get_serialized_size_village_interfaces__srv__BorrowMoney_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _BorrowMoney_Response__ros_msg_type * ros_message = static_cast<const _BorrowMoney_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name success
  {
    size_t item_size = sizeof(ros_message->success);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name money
  {
    size_t item_size = sizeof(ros_message->money);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _BorrowMoney_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_village_interfaces__srv__BorrowMoney_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_village_interfaces
size_t max_serialized_size_village_interfaces__srv__BorrowMoney_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: success
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: money
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _BorrowMoney_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_village_interfaces__srv__BorrowMoney_Response(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_BorrowMoney_Response = {
  "village_interfaces::srv",
  "BorrowMoney_Response",
  _BorrowMoney_Response__cdr_serialize,
  _BorrowMoney_Response__cdr_deserialize,
  _BorrowMoney_Response__get_serialized_size,
  _BorrowMoney_Response__max_serialized_size
};

static rosidl_message_type_support_t _BorrowMoney_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_BorrowMoney_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, village_interfaces, srv, BorrowMoney_Response)() {
  return &_BorrowMoney_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "village_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "village_interfaces/srv/borrow_money.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t BorrowMoney__callbacks = {
  "village_interfaces::srv",
  "BorrowMoney",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, village_interfaces, srv, BorrowMoney_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, village_interfaces, srv, BorrowMoney_Response)(),
};

static rosidl_service_type_support_t BorrowMoney__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &BorrowMoney__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, village_interfaces, srv, BorrowMoney)() {
  return &BorrowMoney__handle;
}

#if defined(__cplusplus)
}
#endif
