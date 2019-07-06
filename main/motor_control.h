#ifndef __MOTOR_CONTROL_H
#define __MOTOR_CONTROL_H
#define circular_motion_motor_runtime
#define circular_motion_motor_stomptime
#define linear_motion_motor_left_to_right_total_runtime
#define linear_motion_motor_right_to_left_total_runtime
#define linear_motion_motor_left_to_right_switch_on_time
#define linear_motion_motor_right_to_left_switch_on_time
#define linear_motion_motor_left_to_right_unit_runtime
#define linear_motion_motor_right_to_left_unit_runtime

/*@function : This function cleans the panel two times.from right to left
and left to right.
@input      : none
@output     : none
 */
void clean_panel(void);
#endif