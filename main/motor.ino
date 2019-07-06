#include "motor.h"

void run_linear_motor(bool m_direction){
    //turning on the linear motion motor so that the brush moves forward.run the motor for sometime and turn off
    if(m_direction==forward){
      pinMode(linear_motor_switch_1,OUTPUT);
      pinMode(linear_motor_switch_2,OUTPUT);
      digitalWrite(linear_motor_switch_1, HIGH); 
      digitalWrite(linear_motor_switch_2,LOW);
      delay(motor_run_time_linear);
      digitalWrite(linear_motor_switch_1, LOW); 
      digitalWrite(linear_motor_switch_2,LOW);
    }
    //turning on the linear motion motor so that the brush moves backward.run the motor for sometime and turn off
    else if(m_direction==backward){
      pinMode(linear_motor_switch_1,OUTPUT);
      pinMode(linear_motor_switch_2,OUTPUT);
      digitalWrite(linear_motor_switch_1, LOW); 
      digitalWrite(linear_motor_switch_2,HIGH);
      delay(motor_run_time_linear);
      digitalWrite(linear_motor_switch_1, LOW); 
      digitalWrite(linear_motor_switch_2,LOW); 
    }
    //turning off both the switches for safety
    else
    {
      pinMode(linear_motor_switch_1,OUTPUT);
      pinMode(linear_motor_switch_2,OUTPUT);
      digitalWrite(linear_motor_switch_1, LOW); 
      digitalWrite(linear_motor_switch_2,LOW); 
    }
}
 //motor_direction m_direction=forward;
void run_circular_motor(){
    pinMode(circular_motor_switch,OUTPUT);
    digitalWrite(circular_motor_switch, HIGH); //turning the motor on to clean up dust 
    delay(motor_run_time_cicular);             //keep the motor on for some time
    digitalWrite(circular_motor_switch, LOW);  //turning off the motor   
}
