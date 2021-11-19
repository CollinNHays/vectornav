// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from vectornav_msgs:msg/ImuGroup.idl
// generated code does not contain a copyright notice
#include "vectornav_msgs/msg/detail/imu_group__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `uncompmag`
// Member `uncompaccel`
// Member `uncompgyro`
// Member `deltatheta_dtheta`
// Member `deltavel`
// Member `mag`
// Member `accel`
// Member `angularrate`
#include "geometry_msgs/msg/detail/vector3__functions.h"

bool
vectornav_msgs__msg__ImuGroup__init(vectornav_msgs__msg__ImuGroup * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    vectornav_msgs__msg__ImuGroup__fini(msg);
    return false;
  }
  // group_fields
  // imustatus
  // uncompmag
  if (!geometry_msgs__msg__Vector3__init(&msg->uncompmag)) {
    vectornav_msgs__msg__ImuGroup__fini(msg);
    return false;
  }
  // uncompaccel
  if (!geometry_msgs__msg__Vector3__init(&msg->uncompaccel)) {
    vectornav_msgs__msg__ImuGroup__fini(msg);
    return false;
  }
  // uncompgyro
  if (!geometry_msgs__msg__Vector3__init(&msg->uncompgyro)) {
    vectornav_msgs__msg__ImuGroup__fini(msg);
    return false;
  }
  // temp
  // pres
  // deltatheta_time
  // deltatheta_dtheta
  if (!geometry_msgs__msg__Vector3__init(&msg->deltatheta_dtheta)) {
    vectornav_msgs__msg__ImuGroup__fini(msg);
    return false;
  }
  // deltavel
  if (!geometry_msgs__msg__Vector3__init(&msg->deltavel)) {
    vectornav_msgs__msg__ImuGroup__fini(msg);
    return false;
  }
  // mag
  if (!geometry_msgs__msg__Vector3__init(&msg->mag)) {
    vectornav_msgs__msg__ImuGroup__fini(msg);
    return false;
  }
  // accel
  if (!geometry_msgs__msg__Vector3__init(&msg->accel)) {
    vectornav_msgs__msg__ImuGroup__fini(msg);
    return false;
  }
  // angularrate
  if (!geometry_msgs__msg__Vector3__init(&msg->angularrate)) {
    vectornav_msgs__msg__ImuGroup__fini(msg);
    return false;
  }
  // sensat
  return true;
}

void
vectornav_msgs__msg__ImuGroup__fini(vectornav_msgs__msg__ImuGroup * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // group_fields
  // imustatus
  // uncompmag
  geometry_msgs__msg__Vector3__fini(&msg->uncompmag);
  // uncompaccel
  geometry_msgs__msg__Vector3__fini(&msg->uncompaccel);
  // uncompgyro
  geometry_msgs__msg__Vector3__fini(&msg->uncompgyro);
  // temp
  // pres
  // deltatheta_time
  // deltatheta_dtheta
  geometry_msgs__msg__Vector3__fini(&msg->deltatheta_dtheta);
  // deltavel
  geometry_msgs__msg__Vector3__fini(&msg->deltavel);
  // mag
  geometry_msgs__msg__Vector3__fini(&msg->mag);
  // accel
  geometry_msgs__msg__Vector3__fini(&msg->accel);
  // angularrate
  geometry_msgs__msg__Vector3__fini(&msg->angularrate);
  // sensat
}

vectornav_msgs__msg__ImuGroup *
vectornav_msgs__msg__ImuGroup__create()
{
  vectornav_msgs__msg__ImuGroup * msg = (vectornav_msgs__msg__ImuGroup *)malloc(sizeof(vectornav_msgs__msg__ImuGroup));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(vectornav_msgs__msg__ImuGroup));
  bool success = vectornav_msgs__msg__ImuGroup__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
vectornav_msgs__msg__ImuGroup__destroy(vectornav_msgs__msg__ImuGroup * msg)
{
  if (msg) {
    vectornav_msgs__msg__ImuGroup__fini(msg);
  }
  free(msg);
}


bool
vectornav_msgs__msg__ImuGroup__Sequence__init(vectornav_msgs__msg__ImuGroup__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  vectornav_msgs__msg__ImuGroup * data = NULL;
  if (size) {
    data = (vectornav_msgs__msg__ImuGroup *)calloc(size, sizeof(vectornav_msgs__msg__ImuGroup));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = vectornav_msgs__msg__ImuGroup__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        vectornav_msgs__msg__ImuGroup__fini(&data[i - 1]);
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
vectornav_msgs__msg__ImuGroup__Sequence__fini(vectornav_msgs__msg__ImuGroup__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      vectornav_msgs__msg__ImuGroup__fini(&array->data[i]);
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

vectornav_msgs__msg__ImuGroup__Sequence *
vectornav_msgs__msg__ImuGroup__Sequence__create(size_t size)
{
  vectornav_msgs__msg__ImuGroup__Sequence * array = (vectornav_msgs__msg__ImuGroup__Sequence *)malloc(sizeof(vectornav_msgs__msg__ImuGroup__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = vectornav_msgs__msg__ImuGroup__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
vectornav_msgs__msg__ImuGroup__Sequence__destroy(vectornav_msgs__msg__ImuGroup__Sequence * array)
{
  if (array) {
    vectornav_msgs__msg__ImuGroup__Sequence__fini(array);
  }
  free(array);
}
