#ifndef ACCELMAGIQLIB_CONFIG_H
#define ACCELMAGIQLIB_CONFIG_H

#include "pxt.h"

// Default alpha value for the low-pass filter
#ifndef ACCELMAGIQ_DEFAULT_LOW_PASS_FILTER_ALPHA
#ifdef YOTTA_CFG_ACCELMAGIQ_DEFAULT_LOW_PASS_FILTER_ALPHA
#define ACCELMAGIQ_DEFAULT_LOW_PASS_FILTER_ALPHA YOTTA_CFG_ACCELMAGIQ_DEFAULT_LOW_PASS_FILTER_ALPHA
#else
#define ACCELMAGIQ_DEFAULT_LOW_PASS_FILTER_ALPHA 0.3
#endif
#endif

// Coordinate system
// RAW: a raw coordinate system (North: A-button, upside-down)
// BASIC: a non-tilt compensated bearing of the device (North: logo mark)
// TILT: a tilt compensated bearing of the device (North: back side)
#define ACCELMAGIQ_COORDINATE_SYSTEM_RAW 0
#define ACCELMAGIQ_COORDINATE_SYSTEM_BASIC 1
#define ACCELMAGIQ_COORDINATE_SYSTEM_TILT 2
#ifndef ACCELMAGIQ_DEFAULT_COORDINATE_SYSTEM
#ifdef YOTTA_CFG_ACCELMAGIQ_DEFAULT_COORDINATE_SYSTEM
#define ACCELMAGIQ_DEFAULT_COORDINATE_SYSTEM YOTTA_CFG_ACCELMAGIQ_DEFAULT_COORDINATE_SYSTEM
#else
#define ACCELMAGIQ_DEFAULT_COORDINATE_SYSTEM ACCELMAGIQ_COORDINATE_SYSTEM_BASIC
#endif
#endif

// Algorithm used for estimation
#define ACCELMAGIQ_ESTIMATE_METHOD_SIMPLE 0
#define ACCELMAGIQ_ESTIMATE_METHOD_FAMC 1
#ifndef ACCELMAGIQ_ESTIMATE_METHOD
#ifdef YOTTA_CFG_ACCELMAGIQ_ESTIMATE_METHOD
#define ACCELMAGIQ_ESTIMATE_METHOD YOTTA_CFG_ACCELMAGIQ_ESTIMATE_METHOD
#else
#define ACCELMAGIQ_ESTIMATE_METHOD ACCELMAGIQ_ESTIMATE_METHOD_FAMC
#endif
#endif

#endif // ACCELMAGIQLIB_CONFIG_H