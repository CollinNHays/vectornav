// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from vectornav_msgs:msg/TimeGroup.idl
// generated code does not contain a copyright notice
#include "vectornav_msgs/msg/detail/time_group__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `timeutc`
#include "vectornav_msgs/msg/detail/time_utc__functions.h"
// Member `timestatus`
#include "vectornav_msgs/msg/detail/time_status__functions.h"

bool
vectornav_msgs__msg__TimeGroup__init(vectornav_msgs__msg__TimeGroup * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    vectornav_msgs__msg__TimeGroup__fini(msg);
    return false;
  }
  // group_fields
  // timestartup
  // timegps
  // gpstow
  // gpsweek
  // timesyncin
  // timegpspps
  // timeutc
  if (!vectornav_msgs__msg__TimeUTC__init(&msg->timeutc)) {
    vectornav_msgs__msg__TimeGroup__fini(msg);
    return false;
  }
  // syncincnt
  // syncoutcnt
  // timestatus
  if (!vectornav_msgs__msg__TimeStatus__init(&msg->timestatus)) {
    vectornav_msgs__msg__TimeGroup__fini(msg);
    return false;
  }
  return true;
}

void
vectornav_msgs__msg__TimeGroup__fini(vectornav_msgs__msg__TimeGroup * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // group_fields
  // timestartup
  // timegps
  // gpstow
  // gpsweek
  // timesyncin
  // timegpspps
  // timeutc
  vectornav_msgs__msg__TimeUTC__fini(&msg->timeutc);
  // syncincnt
  // syncoutcnt
  // timestatus
  vectornav_msgs__msg__TimeStatus__fini(&msg->timestatus);
}

vectornav_msgs__msg__TimeGroup *
vectornav_msgs__msg__TimeGroup__create()
{
  vectornav_msgs__msg__TimeGroup * msg = (vectornav_msgs__msg__TimeGroup *)malloc(sizeof(vectornav_msgs__msg__TimeGroup));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(vectornav_msgs__msg__TimeGroup));
  bool success = vectornav_msgs__msg__TimeGroup__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
vectornav_msgs__msg__TimeGroup__destroy(vectornav_msgs__msg__TimeGroup * msg)
{
  if (msg) {
    vectornav_msgs__msg__TimeGroup__fini(msg);
  }
  free(msg);
}


bool
vectornav_msgs__msg__TimeGroup__Sequence__init(vectornav_msgs__msg__TimeGroup__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  vectornav_msgs__msg__TimeGroup * data = NULL;
  if (size) {
    data = (vectornav_msgs__msg__TimeGroup *)calloc(size, sizeof(vectornav_msgs__msg__TimeGroup));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = vectornav_msgs__msg__TimeGroup__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        vectornav_msgs__msg__TimeGroup__fini(&data[i - 1]);
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
vectornav_msgs__msg__TimeGroup__Sequence__fini(vectornav_msgs__msg__TimeGroup__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      vectornav_msgs__msg__TimeGroup__fini(&array->data[i]);
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

vectornav_msgs__msg__TimeGroup__Sequence *
vectornav_msgs__msg__TimeGroup__Sequence__create(size_t size)
{
  vectornav_msgs__msg__TimeGroup__Sequence * array = (vectornav_msgs__msg__TimeGroup__Sequence *)malloc(sizeof(vectornav_msgs__msg__TimeGroup__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = vectornav_msgs__msg__TimeGroup__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
vectornav_msgs__msg__TimeGroup__Sequence__destroy(vectornav_msgs__msg__TimeGroup__Sequence * array)
{
  if (array) {
    vectornav_msgs__msg__TimeGroup__Sequence__fini(array);
  }
  free(array);
}
