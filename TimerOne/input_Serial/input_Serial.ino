#include <TimerOne.h>

const int a = 9;
const int b = 10;

void setup() {
  Serial.begin(9600);
  Timer1.initialize();
  Timer1.pwm(a, 0);
  Timer1.pwm(b, 0);

  Timer1.setPeriod(1000000/1000);
}

void loop() {
  if(Serial.available()){
    char input = Serial.read();

    switch(input){
      case '0':
        Timer1.setPwmDuty(a, 100*int(input-48));
        delay(500);
        tone (b, 100*int(input-48), 300);
      break;
      case '1':
        Timer1.setPwmDuty(a, 100*int(input-48));
        delay(500);
        tone (b, 262, 300);
      break;
      case '2':
        Timer1.setPwmDuty(a, 100*int(input-48));
        delay(500);
        tone (b, 294, 300);
      break;
      case '3':
        Timer1.setPwmDuty(a, 100*int(input-48));
        delay(500);
        tone (b, 330, 300);
      break;
      case '4':
        Timer1.setPwmDuty(a, 100*int(input-48));
        delay(500);
        tone (b, 349, 300);
      break;
      case '5':
        Timer1.setPwmDuty(a, 100*int(input-48));
        delay(500);
        tone (b, 392, 300);
      break;
      case '6':
        Timer1.setPwmDuty(a, 100*int(input-48));
        delay(500);
        tone (b, 440, 300);
      break;
      case '7':
        Timer1.setPwmDuty(a, 100*int(input-48));
        delay(500);
        tone (b, 494, 300);
      break;
      case '8':
        Timer1.setPwmDuty(a, 100*int(input-48));
        delay(500);
        tone (b, 523, 300);
      break;
      case '9':
        Timer1.setPwmDuty(a, 100*int(input-48));
        delay(500);
        tone (b, 587, 300);
      break;
    }
  }
}
