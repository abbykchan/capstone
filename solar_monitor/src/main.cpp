#include "util.h"
#include "globals.h"

#include "CSVHandler.h"

#include <LED.h>
#include <DFRobot_INA219.h>

#include <SD.h>
#include <TimeLib.h>

#include <Arduino.h>

elapsedMillis time_since_measure;
elapsedMillis time_since_button_press;

LED green_led(GREEN_LED_PIN);
DFRobot_INA219_IIC ina219(&Wire, INA219_I2C_ADDRESS4);

CSVHandler power_recording;

double curr_power = 0;
double prev_power = 0;
double energy = 0;

void setup()
{
    Serial.begin(BAUD_RATE);
    green_led.init();

    // Setup clock
    setSyncProvider(getTeensy3Time);

    // Check SD card
    if (!SD.begin(BUILTIN_SDCARD))
    {
        error_handler("SD card failed");
    }
    else if (!SD.mediaPresent())
    {
        error_handler("SD card not present");
    }

    if (timeStatus() != timeSet)
    {
        error_handler("Unable to sync with the RTC");
    }

    if (!ina219.begin())
    {
        error_handler("INA219 failed");
    }

    green_led.on();
    ina219.linearCalibrate(INA219_READING_mA, EXT_METER_READING_mA);
    power_recording.init(getFilename(), SD, RECORDING_COLUMNS, RECORDING_NUM_COLUMNS);
}

void loop()
{
    // Interpret serial commands
    if (Serial.available())
    {
        char incomingByte = Serial.read();

        if (incomingByte == TIME_COMMAND)
        {
            updateRTC(); // Ask for survey after sleep
        }
        else if (incomingByte == PRINT_COMMAND)
        {
            outputStoredData();
        }
        else if (incomingByte == CLEAR_COMMAND)
        {
            deleteStoredData();
            power_recording.init(getFilename(), SD, RECORDING_COLUMNS, RECORDING_NUM_COLUMNS);
        }
    }

    // Make sensor readings every measurement inteval and save it to the current csv
    if (time_since_measure > MEASUREMENT_INTERVAL)
    {
        time_since_measure -= MEASUREMENT_INTERVAL;

        double busVoltage = ina219.getBusVoltage_V();
        double current = ina219.getCurrent_mA() / 1000;
        curr_power = busVoltage * current;
        energy += (curr_power + prev_power) * 0.5 * (MEASUREMENT_INTERVAL / 1000);
        prev_power = curr_power;

        String voltageString(busVoltage, 4);
        String currentString(current, 4);
        String powerString(curr_power, 7);
        String energyString(energy, 7);

        String columns[RECORDING_NUM_COLUMNS] =
            {
                getTeensy3Time(),
                voltageString,
                currentString,
                powerString,
                energyString
            };

        Serial.printf("%s, %s, %s, %s, %s\n", columns[0].c_str(), columns[1].c_str(), columns[2].c_str(), columns[3].c_str(), columns[4].c_str());

        // if (!power_recording.write(columns))
        // {
        //     error_handler("Unable to write to CSV");
        // }
    }
}
