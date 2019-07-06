#include "gsm.h"

void send_sms(){
Serial2.print("AT+CMGF=1\r");
delay(1000);
Serial2.print("AT+CMGS=\"+88019232912\"\r"); //Number to send the sms
delay(1000);
Serial2.print("Panel voltage is low.Please check\r"); //The text of the message to be sent
delay(1000);
Serial2.write(0x1A); //sending ctrl+z
delay(1000);
}
