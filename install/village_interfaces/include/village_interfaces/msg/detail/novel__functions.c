// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from village_interfaces:msg/Novel.idl
// generated code does not contain a copyright notice
#include "village_interfaces/msg/detail/novel__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `content`
#include "rosidl_runtime_c/string_functions.h"
// Member `image`
#include "sensor_msgs/msg/detail/image__functions.h"

bool
village_interfaces__msg__Novel__init(village_interfaces__msg__Novel * msg)
{
  if (!msg) {
    return false;
  }
  // content
  if (!rosidl_runtime_c__String__init(&msg->content)) {
    village_interfaces__msg__Novel__fini(msg);
    return false;
  }
  // image
  if (!sensor_msgs__msg__Image__init(&msg->image)) {
    village_interfaces__msg__Novel__fini(msg);
    return false;
  }
  return true;
}

void
village_interfaces__msg__Novel__fini(village_interfaces__msg__Novel * msg)
{
  if (!msg) {
    return;
  }
  // content
  rosidl_runtime_c__String__fini(&msg->content);
  // image
  sensor_msgs__msg__Image__fini(&msg->image);
}

village_interfaces__msg__Novel *
village_interfaces__msg__Novel__create()
{
  village_interfaces__msg__Novel * msg = (village_interfaces__msg__Novel *)malloc(sizeof(village_interfaces__msg__Novel));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(village_interfaces__msg__Novel));
  bool success = village_interfaces__msg__Novel__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
village_interfaces__msg__Novel__destroy(village_interfaces__msg__Novel * msg)
{
  if (msg) {
    village_interfaces__msg__Novel__fini(msg);
  }
  free(msg);
}


bool
village_interfaces__msg__Novel__Sequence__init(village_interfaces__msg__Novel__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  village_interfaces__msg__Novel * data = NULL;
  if (size) {
    data = (village_interfaces__msg__Novel *)calloc(size, sizeof(village_interfaces__msg__Novel));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = village_interfaces__msg__Novel__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        village_interfaces__msg__Novel__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
village_interfaces__msg__Novel__Sequence__fini(village_interfaces__msg__Novel__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      village_interfaces__msg__Novel__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

village_interfaces__msg__Novel__Sequence *
village_interfaces__msg__Novel__Sequence__create(size_t size)
{
  village_interfaces__msg__Novel__Sequence * array = (village_interfaces__msg__Novel__Sequence *)malloc(sizeof(village_interfaces__msg__Novel__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = village_interfaces__msg__Novel__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
village_interfaces__msg__Novel__Sequence__destroy(village_interfaces__msg__Novel__Sequence * array)
{
  if (array) {
    village_interfaces__msg__Novel__Sequence__fini(array);
  }
  free(array);
}
