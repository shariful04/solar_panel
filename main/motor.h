#ifndef __MOTOR_H_
#define __MOTOR_H_
#define relay_module_channel_1  11
#define relay_module_channel_2  12
#define relay_module_channel_3  13
#define circular_motor_switch   relay_module_channel_1
#define linear_motor_switch_1   relay_module_channel_2
#define linear_motor_switch_2   relay_module_channel_3
#define motor_run_time_cicular  1000   //in millisecond
#define motor_run_time_linear   1000  //in milisecond
#define motor_run_number        10   //to be calibrated to determine how many times we need to power the motor to take the brush form one side to another
#define forward                 0
#define backward                1                              
/*this function runs the linear motion motor that takes
the brush form one side to another side of the panel
@input: motor direction
@output: none
*/
void run_linear_motor(bool m_direction);

/*this function rotates the brush on the surface of the panel
to remove dust.
@input:none
@output:none
*/
void run_circular_motor();
#endif
