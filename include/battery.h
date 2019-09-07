#include <Arduino.h>
#include "controls.h"
#include "hal.h"

#define BATTERY_MIN_V 2.9
#define BATTERY_MAX_V 4.0

uint8_t get_battery_capacity();