#include <Servo.h>
Servo myservo;
const int PinServo = 14;

void setup(void){
  pinMode(PinServo, OUTPUT);
  myservo.attach(PinServo);
  myservo.write(45);
  delay(1000);       
  myservo.write(30);
}

void loop(){
  
}
