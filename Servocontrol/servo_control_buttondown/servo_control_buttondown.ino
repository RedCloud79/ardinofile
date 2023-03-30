#include <TimerOne.h>
#define BUTTON_PIN 2

const int SERVO = 10;

const int SERVO_PERIOD = 20000;
const int SERVO_MINDUTY = (1024/20)*0.7;
const int SERVO_MAXDUTY = (1024/20)*2.7;

int pinCount = 2;

void setup() {
  Timer1.initialize();
  Timer1.pwm(SERVO, 0);

  Timer1.setPeriod(SERVO_PERIOD);
  Timer1.setPwmDuty(SERVO, SERVO_MINDUTY);

  pinMode(BUTTON_PIN, INPUT_PULLUP);
}

void loop() {
  byte buttonState = digitalRead(BUTTON_PIN);
  if (buttonState == LOW){
    for ( int angle=SERVO_MINDUTY; angle<=SERVO_MAXDUTY; angle++){
    Timer1.setPwmDuty(SERVO, angle);
    delay(30);
    }
  }
}
