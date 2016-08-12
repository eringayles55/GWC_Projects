#include <Servo.h>

Servo servoRight;
Servo servoLeft;
void setup() {
  // put your setup code here, to run once:
  servoLeft.attach(11);
  servoRight.attach(10);
  
  servoLeft.writeMicroseconds(1500);
  servoRight.writeMicroseconds(1500);
  delay(2000);



  
}

void loop() {
  // put your main code here, to run repeatedly:
 servoLeft.writeMicroseconds(1300);
 servoRight.writeMicroseconds(1700);
 delay(6000);
      //right
  servoLeft.writeMicroseconds(1700);
  servoRight.writeMicroseconds(1700);
  delay(6000);  
 
}
