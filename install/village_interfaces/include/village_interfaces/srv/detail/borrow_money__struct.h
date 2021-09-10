// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from village_interfaces:srv/BorrowMoney.idl
// generated code does not contain a copyright notice

#ifndef VILLAGE_INTERFACES__SRV__DETAIL__BORROW_MONEY__STRUCT_H_
#define VILLAGE_INTERFACES__SRV__DETAIL__BORROW_MONEY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'name'
#include "rosidl_runtime_c/string.h"

// Struct defined in srv/BorrowMoney in the package village_interfaces.
typedef struct village_interfaces__srv__BorrowMoney_Request
{
  rosidl_runtime_c__String name;
  uint32_t money;
} village_interfaces__srv__BorrowMoney_Request;

// Struct for a sequence of village_interfaces__srv__BorrowMoney_Request.
typedef struct village_interfaces__srv__BorrowMoney_Request__Sequence
{
  village_interfaces__srv__BorrowMoney_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} village_interfaces__srv__BorrowMoney_Request__Sequence;


// Constants defined in the message

// Struct defined in srv/BorrowMoney in the package village_interfaces.
typedef struct village_interfaces__srv__BorrowMoney_Response
{
  bool success;
  uint32_t money;
} village_interfaces__srv__BorrowMoney_Response;

// Struct for a sequence of village_interfaces__srv__BorrowMoney_Response.
typedef struct village_interfaces__srv__BorrowMoney_Response__Sequence
{
  village_interfaces__srv__BorrowMoney_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} village_interfaces__srv__BorrowMoney_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // VILLAGE_INTERFACES__SRV__DETAIL__BORROW_MONEY__STRUCT_H_
