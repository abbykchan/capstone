#include "util.h"
#include "globals.h"

#include "LED.h"

#include <SD.h>
#include <TimeLib.h>
#include <Arduino.h>


extern LED green_led;
void error_handler(String message)
{
  if (Serial) {
    Serial.println(message);
  }
  
  File file = SD.open("error.log", FILE_WRITE);
  if (file) {
    file.println(message);
    file.close();
  }

  while (true) {
    green_led.toggle();
    delay(100);
  }
}

extern SDClass SD;

void outputStoredData()
{
  String filename = "Recording_1.csv";
  int i = 2;
  while (SD.exists(filename.c_str())) {
    CSVHandler recording(filename, SD, nullptr, 0);
    recording.printToSerial();

    filename = "Recording_" + (String)i + ".csv";
    i++;
  }
}

void deleteStoredData() {
  // delete all records
  String filename = "Recording_1.csv";
  int i = 2;
  while (SD.exists(filename.c_str())) {
    SD.remove(filename.c_str());
    filename = "Recording_" + (String)i + ".csv";
    i++;
  }
}


/******************
 * Time/RTC Methods
 * ****************/
void updateRTC()
{
  if (Serial.available()) {
    time_t t = processSyncMessage();
    if (t != 0) {
      Teensy3Clock.set(t); // set the RTC
      setTime(t);
      Serial.printf("Time updated to %u\n", t);
    }
  }
}

unsigned long processSyncMessage()
{
  static const unsigned long DEFAULT_TIME = 1640995200; // Jan 1 2022
  unsigned long pctime = 0L;

  pctime = Serial.parseInt();
  //TODO: Use a timezone library. Just manually subtracting 4 hours to get local time right now
  pctime -= 4 * 60 * 60; // -4 UTC (EDT) 
  if( pctime < DEFAULT_TIME) {
    pctime = 0L; // return 0 to indicate that the time is not valid
  }
  return pctime;
}

time_t getTeensy3Time() 
{
    return Teensy3Clock.get();
}

String getFriendlyDate() 
{
    static const String days[7] = {"Sun", "Mon", "Tues", "Wed", "Thurs", "Fri", "Sat"};
    static const String months[12] = {"Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};
    String output = "";
    output += days[(weekday() - 1)];
    output += " ";
    output += day();
    output += " ";
    output += months[(month() - 1)];
    return output;
}

String getFriendlyTime() 
{
    String output = "";
    output += hourFormat12();
    output += ":";
    int min = minute();
    if (min < 10) { output+="0"; }
    output += min;
    output += ":";
    int sec = second();
    if (sec < 10) { output+="0"; }
    output += sec;
    output += " ";
    output += isAM() ? "AM" : "PM";
    return output;
}

String getFilename(bool get_last_filename) {
  String filename = "Recording_1.csv";
  int i = 1;
  String last_filename = filename;
  while (SD.exists(filename.c_str())) {
    if (get_last_filename) {last_filename = filename;}
    filename = "Recording_" + (String)i + ".csv";
    i++;
  }
  return get_last_filename ? last_filename : filename;
}
