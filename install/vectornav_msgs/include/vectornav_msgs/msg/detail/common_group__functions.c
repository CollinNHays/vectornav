// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from vectornav_msgs:msg/CommonGroup.idl
// generated code does not contain a copyright notice
#include "vectornav_msgs/msg/detail/common_group__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `yawpitchroll`
// Member `angularrate`
// Member `velocity`
// Member `accel`
// Member `imu_accel`
// Member `imu_rate`
// Member `magpres_mag`
// Member `deltatheta_dtheta`
// Member `deltatheta_dvel`
#include "geometry_msgs/msg/detail/vector3__functions.h"
// Member `quaternion`
#include "geometry_msgs/msg/detail/quaternion__functions.h"
// Member `position`
#include "geometry_msgs/msg/detail/point__functions.h"
// Member `insstatus`
#include "vectornav_msgs/msg/detail/ins_status__functions.h"

bool
vectornav_msgs__msg__CommonGroup__init(vectornav_msgs__msg__CommonGroup * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    vectornav_msgs__msg__CommonGroup__fini(msg);
    return false;
  }
  // group_fields
  // timestartup
  // timegps
  // timesyncin
  // yawpitchroll
  if (!geometry_msgs__msg__Vector3__init(&msg->yawpitchroll)) {
    vectornav_msgs__msg__CommonGroup__fini(msg);
    return false;
  }
  // quaternion
  if (!geometry_msgs__msg__Quaternion__init(&msg->quaternion)) {
    vectornav_msgs__msg__CommonGroup__fini(msg);
    return false;
  }
  // angularrate
  if (!geometry_msgs__msg__Vector3__init(&msg->angularrate)) {
    vectornav_msgs__msg__CommonGroup__fini(msg);
    return false;
  }
  // position
  if (!geometry_msgs__msg__Point__init(&msg->position)) {
    vectornav_msgs__msg__CommonGroup__fini(msg);
    return false;
  }
  // velocity
  if (!geometry_msgs__msg__Vector3__init(&msg->velocity)) {
    vectornav_msgs__msg__CommonGroup__fini(msg);
    return false;
  }
  // accel
  if (!geometry_msgs__msg__Vector3__init(&msg->accel)) {
    vectornav_msgs__msg__CommonGroup__fini(msg);
    return false;
  }
  // imu_accel
  if (!geometry_msgs__msg__Vector3__init(&msg->imu_accel)) {
    vectornav_msgs__msg__CommonGroup__fini(msg);
    return false;
  }
  // imu_rate
  if (!geometry_msgs__msg__Vector3__init(&msg->imu_rate)) {
    vectornav_msgs__msg__CommonGroup__fini(msg);
    return false;
  }
  // magpres_mag
  if (!geometry_msgs__msg__Vector3__init(&msg->magpres_mag)) {
    vectornav_msgs__msg__CommonGroup__fini(msg);
    return false;
  }
  // magpres_temp
  // magpres_pres
  // deltatheta_dtime
  // deltatheta_dtheta
  if (!geometry_msgs__msg__Vector3__init(&msg->deltatheta_dtheta)) {
    vectornav_msgs__msg__CommonGroup__fini(msg);
    return false;
  }
  // deltatheta_dvel
  if (!geometry_msgs__msg__Vector3__init(&msg->deltatheta_dvel)) {
    vectornav_msgs__msg__CommonGroup__fini(msg);
    return false;
  }
  // insstatus
  if (!vectornav_msgs__msg__InsStatus__init(&msg->insstatus)) {
    vectornav_msgs__msg__CommonGroup__fini(msg);
    return false;
  }
  // syncincnt
  // timegpspps
  return true;
}

void
vectornav_msgs__msg__CommonGroup__fini(vectornav_msgs__msg__CommonGroup * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // group_fields
  // timestartup
  // timegps
  // timesyncin
  // yawpitchroll
  geometry_msgs__msg__Vector3__fini(&msg->yawpitchroll);
  // quaternion
  geometry_msgs__msg__Quaternion__fini(&msg->quaternion);
  // angularrate
  geometry_msgs__msg__Vector3__fini(&msg->angularrate);
  // position
  geometry_msgs__msg__Point__fini(&msg->position);
  // velocity
  geometry_msgs__msg__Vector3__fini(&msg->velocity);
  // accel
  geometry_msgs__msg__Vector3__fini(&msg->accel);
  // imu_accel
  geometry_msgs__msg__Vector3__fini(&msg->imu_accel);
  // imu_rate
  geometry_msgs__msg__Vector3__fini(&msg->imu_rate);
  // magpres_mag
  geometry_msgs__msg__Vector3__fini(&msg->magpres_mag);
  // magpres_temp
  // magpres_pres
  // deltatheta_dtime
  // deltatheta_dtheta
  geometry_msgs__msg__Vector3__fini(&msg->deltatheta_dtheta);
  // deltatheta_dvel
  geometry_msgs__msg__Vector3__fini(&msg->deltatheta_dvel);
  // insstatus
  vectornav_msgs__msg__InsStatus__fini(&msg->insstatus);
  // syncincnt
  // timegpspps
}

vectornav_msgs__msg__CommonGroup *
vectornav_msgs__msg__CommonGroup__create()
{
  vectornav_msgs__msg__CommonGroup * msg = (vectornav_msgs__msg__CommonGroup *)malloc(sizeof(vectornav_msgs__msg__CommonGroup));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(vectornav_msgs__msg__CommonGroup));
  bool success = vectornav_msgs__msg__CommonGroup__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
vectornav_msgs__msg__CommonGroup__destroy(vectornav_msgs__msg__CommonGroup * msg)
{
  if (msg) {
    vectornav_msgs__msg__CommonGroup__fini(msg);
  }
  free(msg);
}


bool
vectornav_msgs__msg__CommonGroup__Sequence__init(vectornav_msgs__msg__CommonGroup__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  vectornav_msgs__msg__CommonGroup * data = NULL;
  if (size) {
    data = (vectornav_msgs__msg__CommonGroup *)calloc(size, sizeof(vectornav_msgs__msg__CommonGroup));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = vectornav_msgs__msg__CommonGroup__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        vectornav_msgs__msg__CommonGroup__fini(&data[i - 1]);
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
vectornav_msgs__msg__CommonGroup__Sequence__fini(vectornav_msgs__msg__CommonGroup__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      vectornav_msgs__msg__CommonGroup__fini(&array->data[i]);
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

vectornav_msgs__msg__CommonGroup__Sequence *
vectornav_msgs__msg__CommonGroup__Sequence__create(size_t size)
{
  vectornav_msgs__msg__CommonGroup__Sequence * array = (vectornav_msgs__msg__CommonGroup__Sequence *)malloc(sizeof(vectornav_msgs__msg__CommonGroup__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = vectornav_msgs__msg__CommonGroup__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
vectornav_msgs__msg__CommonGroup__Sequence__destroy(vectornav_msgs__msg__CommonGroup__Sequence * array)
{
  if (array) {
    vectornav_msgs__msg__CommonGroup__Sequence__fini(array);
  }
  free(array);
}
