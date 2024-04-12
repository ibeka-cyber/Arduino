
#include <Servo.h>

Servo Servo_motor;  

 
int val;   

void setup() {
  Servo_motor.attach(11);
}

void loop() {
 
  Servo_motor.write(180);                  
  delay(2000);  
  Servo_motor.write(0); 
  delay(2000);
  
}

