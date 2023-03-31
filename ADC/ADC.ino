#include <TimerOne.h>

const int BUZZER = 10;
int analogPin = A0;


void setup() {
  Timer1.initialize();
  Timer1.pwm(BUZZER, 0);
  Timer1.setPwmDuty(BUZZER, 100);
}

void loop() {
int val = analogRead(analogPin);
//tone(BUZZER,map(val, 0, 1023, 0, 3000), 1);
Timer1.setPeriod(1000000/map(val, 0, 1023, 0, 3000));
      delay(500);
}

