#include <Servo.h>

Servo myservo;

const int t1_LED = 10;
int potpin = A0;

void setup() {
  myservo.attach(9);
  pinMode (t1_LED, OUTPUT);
}


void loop() { 
  int servo_1 = map(analogRead(potpin), 0, 1023, 0, 180); 
  int bright = map(analogRead(potpin), 0, 1023, 0, 255);
  
  myservo.write(servo_1);
  analogWrite(10, bright);
  delay(50);
}
