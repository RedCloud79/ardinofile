#include <Servo.h>

Servo myservo;
int buttonPin = 3;
int servoPin = 10;
int buttonState = 0;
int angle = 0;
int angval = 0;
int buttonval = 0;

void setup() {
  myservo.attach(servoPin);
  pinMode(buttonPin, INPUT);
}
void loop() {
  buttonState = digitalRead(buttonPin);
  if (buttonState == HIGH) {
    buttonval = buttonval + 1;
    if (buttonval <= 18){
      angle = angle + 10;
      myservo.write(angval);
      angval = angle;
      delay(1000);
    if (buttonval >= 18){
      myservo.write(0);
      angval = 0;
      angle = 0;
      buttonval = 0;
    }
  }
  }
}

