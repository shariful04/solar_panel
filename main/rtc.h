#ifndef __RTC_H
#define __RTC_H
#include "RTClib.h"
#define ds1307_sda A4
#define ds1307_scl A5

//this structure contains the user input about time and date
typedef struct{
  uint8_t Date;
  uint8_t Month;
  uint8_t Hour;
  uint8_t Minute;
  uint8_t Meridian;
  uint16_t Year;
}panel_user_settings;

//this structure helps to get time and date input form user
 typedef struct{
  uint8_t digit_count;
  bool invalid_flag;
  uint8_t user_input_buffer[4];
  String parameter_name;
  String message_to_user;         
}panel_setup_time;

/*this function takes date and time input from user and set up the system rtc
 @input RTC_DS1307 type object
 @output none.sets the rtc up according to user
 */
void setup_rtc(RTC_DS1307 system_clock);
#endif
