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
  
  //right
  servoLeft.writeMicroseconds(1700);
  servoRight.writeMicroseconds(1700);
  delay(1000);  
  servoLeft.writeMicroseconds(1700);
  servoRight.writeMicroseconds(1300);
  delay(2000);
  //left
  servoLeft.writeMicroseconds(1300);
  servoRight.writeMicroseconds(1300);
  delay(1000);
  servoLeft.writeMicroseconds(1700);
  servoRight.writeMicroseconds(1300);
  delay(2000);
  //spin
  servoLeft.writeMicroseconds(1300);
  servoRight.writeMicroseconds(1300);
  delay(4000);
  //backward
  servoLeft.writeMicroseconds(1300);
  servoRight.writeMicroseconds(1700);
  delay(2000);

   //right
  servoLeft.writeMicroseconds(1700);
  servoRight.writeMicroseconds(1700);
  delay(500);  
  servoLeft.writeMicroseconds(1300);
  servoRight.writeMicroseconds(1700);
  delay(1000);
  //left
  servoLeft.writeMicroseconds(1300);
  servoRight.writeMicroseconds(1300);
  delay(500);
  servoLeft.writeMicroseconds(1300);
  servoRight.writeMicroseconds(1700);
  delay(1000);
     //right
  servoLeft.writeMicroseconds(1700);
  servoRight.writeMicroseconds(1700);
  delay(500);  
  servoLeft.writeMicroseconds(1300);
  servoRight.writeMicroseconds(1700);
  delay(1000);
  //left
  servoLeft.writeMicroseconds(1300);
  servoRight.writeMicroseconds(1300);
  delay(500);
  servoLeft.writeMicroseconds(1300);
  servoRight.writeMicroseconds(1700);
  delay(1000);
     //right
  servoLeft.writeMicroseconds(1700);
  servoRight.writeMicroseconds(1700);
  delay(500);  
  servoLeft.writeMicroseconds(1300);
  servoRight.writeMicroseconds(1700);
  delay(1000);
  //left
  servoLeft.writeMicroseconds(1300);
  servoRight.writeMicroseconds(1300);
  delay(500);
  servoLeft.writeMicroseconds(1300);
  servoRight.writeMicroseconds(1700);
  delay(1000);
     //right
  servoLeft.writeMicroseconds(1700);
  servoRight.writeMicroseconds(1700);
  delay(500);  
  servoLeft.writeMicroseconds(1300);
  servoRight.writeMicroseconds(1700);
  delay(1000);
  //left
  servoLeft.writeMicroseconds(1300);
  servoRight.writeMicroseconds(1300);
  delay(500);
  servoLeft.writeMicroseconds(1300);
  servoRight.writeMicroseconds(1700);
  delay(1000);
     //right
  servoLeft.writeMicroseconds(1700);
  servoRight.writeMicroseconds(1700);
  delay(500);  
  servoLeft.writeMicroseconds(1300);
  servoRight.writeMicroseconds(1700);
  delay(1000);
  //left
  servoLeft.writeMicroseconds(1300);
  servoRight.writeMicroseconds(1300);
  delay(500);
  servoLeft.writeMicroseconds(1300);
  servoRight.writeMicroseconds(1700);
  delay(1000);
}

void loop() {
  // put your main code here, to run repeatedly:

}
