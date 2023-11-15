#ifndef __GLOBALS_H__
#define __GLOBALS_H__

#include <Arduino.h>

static const int BAUD_RATE = 115200;

static const int GREEN_LED_PIN = 33;

static const int RECORDING_NUM_COLUMNS = 5;
static String RECORDING_COLUMNS[RECORDING_NUM_COLUMNS] = 
    {
        "timestamp",
        "voltage",
        "current",
        "power",
        "energy"
    };

static const int MEASUREMENT_INTERVAL = 1 * 1000; // 5 seconds

// Serial commands
static const char TIME_COMMAND = 'T';
static const char PRINT_COMMAND = 'P';
static const char CLEAR_COMMAND = 'C';

static const float INA219_READING_mA = 7;
static const float EXT_METER_READING_mA = 5.925;

#endif //__GLOBALS_H__