#include <LiquidCrystal.h>
#include "RTClib.h"
#include "sample.h"
#include "lcd.h"
#include "rtc.h"
#include "gsm.h"
#include "motor.h"
//global declarations
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);
SolarPanel panel;
RTC_DS1307 panel_clock;
bool run_cleaning=0;
void setup() {
  //lcd initialization
  lcd.begin(LcdColumnNum,LcdRowNum);
  delay(100);
  lcd.print("Initializing....");
  //rtc initialization
  Serial.begin(9600);
  Serial2.begin(19200);
  if (! panel_clock.begin()) {
    Serial.println("Couldn't find RTC");
    while (1);
  }
  //taking user day and time input and setting up rtc
  setup_rtc(panel_clock);
}

void loop() { 
  DateTime now = panel_clock.now();                   // getting time from rtc
  uint8_t current_hour=now.hour();
  get_parameters(&panel);                            //acquiring panel parameters
  print_lcd(&panel,lcd);                            //displaying parameters in lcd
  if(current_hour>8||cyrrent_hour<8){
    run_cleaning=0;
  }
  else
  run_cleaning=1;
  
  if((uint8_t)panel.average_voltage<11){
      if(current_hour>18 ||current_hour<8)
      {
        send_sms();
      }
  }

  //clean the panel at 8 am
  if(now.hour()==8){
    for(uint8_t count=1;count<= motor_run_number;count++){
      run_linear_motor(forward);
      delay(1000);
      run_circular_motor();
      delay(1000);
    }
  }

  
  
}
