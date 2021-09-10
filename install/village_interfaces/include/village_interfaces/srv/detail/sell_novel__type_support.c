// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from village_interfaces:srv/SellNovel.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "village_interfaces/srv/detail/sell_novel__rosidl_typesupport_introspection_c.h"
#include "village_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "village_interfaces/srv/detail/sell_novel__functions.h"
#include "village_interfaces/srv/detail/sell_novel__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void SellNovel_Request__rosidl_typesupport_introspection_c__SellNovel_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  village_interfaces__srv__SellNovel_Request__init(message_memory);
}

void SellNovel_Request__rosidl_typesupport_introspection_c__SellNovel_Request_fini_function(void * message_memory)
{
  village_interfaces__srv__SellNovel_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember SellNovel_Request__rosidl_typesupport_introspection_c__SellNovel_Request_message_member_array[1] = {
  {
    "money",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(village_interfaces__srv__SellNovel_Request, money),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers SellNovel_Request__rosidl_typesupport_introspection_c__SellNovel_Request_message_members = {
  "village_interfaces__srv",  // message namespace
  "SellNovel_Request",  // message name
  1,  // number of fields
  sizeof(village_interfaces__srv__SellNovel_Request),
  SellNovel_Request__rosidl_typesupport_introspection_c__SellNovel_Request_message_member_array,  // message members
  SellNovel_Request__rosidl_typesupport_introspection_c__SellNovel_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  SellNovel_Request__rosidl_typesupport_introspection_c__SellNovel_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t SellNovel_Request__rosidl_typesupport_introspection_c__SellNovel_Request_message_type_support_handle = {
  0,
  &SellNovel_Request__rosidl_typesupport_introspection_c__SellNovel_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_village_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, village_interfaces, srv, SellNovel_Request)() {
  if (!SellNovel_Request__rosidl_typesupport_introspection_c__SellNovel_Request_message_type_support_handle.typesupport_identifier) {
    SellNovel_Request__rosidl_typesupport_introspection_c__SellNovel_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &SellNovel_Request__rosidl_typesupport_introspection_c__SellNovel_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "village_interfaces/srv/detail/sell_novel__rosidl_typesupport_introspection_c.h"
// already included above
// #include "village_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "village_interfaces/srv/detail/sell_novel__functions.h"
// already included above
// #include "village_interfaces/srv/detail/sell_novel__struct.h"


// Include directives for member types
// Member `novels`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void SellNovel_Response__rosidl_typesupport_introspection_c__SellNovel_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  village_interfaces__srv__SellNovel_Response__init(message_memory);
}

void SellNovel_Response__rosidl_typesupport_introspection_c__SellNovel_Response_fini_function(void * message_memory)
{
  village_interfaces__srv__SellNovel_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember SellNovel_Response__rosidl_typesupport_introspection_c__SellNovel_Response_message_member_array[1] = {
  {
    "novels",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(village_interfaces__srv__SellNovel_Response, novels),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers SellNovel_Response__rosidl_typesupport_introspection_c__SellNovel_Response_message_members = {
  "village_interfaces__srv",  // message namespace
  "SellNovel_Response",  // message name
  1,  // number of fields
  sizeof(village_interfaces__srv__SellNovel_Response),
  SellNovel_Response__rosidl_typesupport_introspection_c__SellNovel_Response_message_member_array,  // message members
  SellNovel_Response__rosidl_typesupport_introspection_c__SellNovel_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  SellNovel_Response__rosidl_typesupport_introspection_c__SellNovel_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t SellNovel_Response__rosidl_typesupport_introspection_c__SellNovel_Response_message_type_support_handle = {
  0,
  &SellNovel_Response__rosidl_typesupport_introspection_c__SellNovel_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_village_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, village_interfaces, srv, SellNovel_Response)() {
  if (!SellNovel_Response__rosidl_typesupport_introspection_c__SellNovel_Response_message_type_support_handle.typesupport_identifier) {
    SellNovel_Response__rosidl_typesupport_introspection_c__SellNovel_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &SellNovel_Response__rosidl_typesupport_introspection_c__SellNovel_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "village_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "village_interfaces/srv/detail/sell_novel__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers village_interfaces__srv__detail__sell_novel__rosidl_typesupport_introspection_c__SellNovel_service_members = {
  "village_interfaces__srv",  // service namespace
  "SellNovel",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // village_interfaces__srv__detail__sell_novel__rosidl_typesupport_introspection_c__SellNovel_Request_message_type_support_handle,
  NULL  // response message
  // village_interfaces__srv__detail__sell_novel__rosidl_typesupport_introspection_c__SellNovel_Response_message_type_support_handle
};

static rosidl_service_type_support_t village_interfaces__srv__detail__sell_novel__rosidl_typesupport_introspection_c__SellNovel_service_type_support_handle = {
  0,
  &village_interfaces__srv__detail__sell_novel__rosidl_typesupport_introspection_c__SellNovel_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, village_interfaces, srv, SellNovel_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, village_interfaces, srv, SellNovel_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_village_interfaces
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, village_interfaces, srv, SellNovel)() {
  if (!village_interfaces__srv__detail__sell_novel__rosidl_typesupport_introspection_c__SellNovel_service_type_support_handle.typesupport_identifier) {
    village_interfaces__srv__detail__sell_novel__rosidl_typesupport_introspection_c__SellNovel_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)village_interfaces__srv__detail__sell_novel__rosidl_typesupport_introspection_c__SellNovel_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, village_interfaces, srv, SellNovel_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, village_interfaces, srv, SellNovel_Response)()->data;
  }

  return &village_interfaces__srv__detail__sell_novel__rosidl_typesupport_introspection_c__SellNovel_service_type_support_handle;
}
