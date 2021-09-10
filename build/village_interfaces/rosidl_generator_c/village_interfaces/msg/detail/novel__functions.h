// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from village_interfaces:msg/Novel.idl
// generated code does not contain a copyright notice

#ifndef VILLAGE_INTERFACES__MSG__DETAIL__NOVEL__FUNCTIONS_H_
#define VILLAGE_INTERFACES__MSG__DETAIL__NOVEL__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "village_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "village_interfaces/msg/detail/novel__struct.h"

/// Initialize msg/Novel message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * village_interfaces__msg__Novel
 * )) before or use
 * village_interfaces__msg__Novel__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_village_interfaces
bool
village_interfaces__msg__Novel__init(village_interfaces__msg__Novel * msg);

/// Finalize msg/Novel message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_village_interfaces
void
village_interfaces__msg__Novel__fini(village_interfaces__msg__Novel * msg);

/// Create msg/Novel message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * village_interfaces__msg__Novel__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_village_interfaces
village_interfaces__msg__Novel *
village_interfaces__msg__Novel__create();

/// Destroy msg/Novel message.
/**
 * It calls
 * village_interfaces__msg__Novel__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_village_interfaces
void
village_interfaces__msg__Novel__destroy(village_interfaces__msg__Novel * msg);


/// Initialize array of msg/Novel messages.
/**
 * It allocates the memory for the number of elements and calls
 * village_interfaces__msg__Novel__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_village_interfaces
bool
village_interfaces__msg__Novel__Sequence__init(village_interfaces__msg__Novel__Sequence * array, size_t size);

/// Finalize array of msg/Novel messages.
/**
 * It calls
 * village_interfaces__msg__Novel__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_village_interfaces
void
village_interfaces__msg__Novel__Sequence__fini(village_interfaces__msg__Novel__Sequence * array);

/// Create array of msg/Novel messages.
/**
 * It allocates the memory for the array and calls
 * village_interfaces__msg__Novel__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_village_interfaces
village_interfaces__msg__Novel__Sequence *
village_interfaces__msg__Novel__Sequence__create(size_t size);

/// Destroy array of msg/Novel messages.
/**
 * It calls
 * village_interfaces__msg__Novel__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_village_interfaces
void
village_interfaces__msg__Novel__Sequence__destroy(village_interfaces__msg__Novel__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // VILLAGE_INTERFACES__MSG__DETAIL__NOVEL__FUNCTIONS_H_
