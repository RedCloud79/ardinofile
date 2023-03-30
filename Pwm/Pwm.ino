#include <TimerOne.h>

const int LED = 10;

void setup() {
  Timer1.initialize();
  Timer.pwm(LED, 0);

  Timer1.setPeriod(1000000); // 1Hz
  Timer1.setPwmDuty(LED, 511); // 0~1023 LED에 대한 상하비
}

void loop() {
  // put your main code here, to run repeatedly:

}
