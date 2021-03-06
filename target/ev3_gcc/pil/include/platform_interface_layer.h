/*
 * platform_interface_layer.h
 *
 *  Created on: Sep 27, 2014
 *      Author: liyixiao
 */

#pragma once

#define PIL_VERSION (3002U)
#define PIL_VERSION_STRING "V1.0" // Minimum supported PIL version for user applications
#define CSL_VERSION_STRING "V1.0" // Current version of EV3RT (a.k.a Core Service Layer Version)

#include "driver_interface_lcd.h"
#include "driver_interface_brick.h"
#include "driver_interface_filesys.h"
#include "driver_interface_sound.h"
#include "driver_interface_bluetooth.h"

// TODO: Should be deprecated
#include "driver_interface.h"
