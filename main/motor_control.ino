#include "relay.h"
#include "motor_control.h"


typedef HIGH on;
typedef LOW  off;
/*module specific functions */
static void relay_switch_init(void);
static void clean_panel_from_left_to_right(void);
static void clean_panel_form_right_to_left(void);




void relay_switch_init(void){
    pinMode(linear_motion_motor_left_switch,OUTPUT);
    pinMode(linear_motion_motor_right_switch,OUTPUT);
    pinMode(circular_motion_motor_switch,OUTPUT);
}




void clean_panel_form_right_to_left(){
    digitalWrite(linear_motion_motor_left_switch,on);
    digitalWrite(linear_motion_motor_right_switch,off);
    delay(linear_motion_motor_left_to_right_unit_runtime);
    digitalWrite(linear_motion_motor_left_switch,off);
    digitalWrite(circular_motion_motor_switch,on);
}







void clean_panel(void){
    clean_panel_from_left_to_right();
    for(uint8_t i=0; i<120){
       delay(500);
    }
    clean_panel_form_right_to_left();
}