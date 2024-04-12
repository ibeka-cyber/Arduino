
#include <Servo.h> // SERVO KÜTÜPHANESİ EKLENİYOR

Servo Servo_motor;  

int potpin = A0;  
int val;   

void setup() {
  Servo_motor.attach(11);
}

void loop() {
  val = analogRead(potpin);            
  val = map(val, 0, 1023, 0, 180);     
  Servo_motor.write(val);                  
  delay(15);                           
}

