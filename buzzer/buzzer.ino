#include <TimerOne.h>
#define BUTTON_PIN 2
#define C 262 // 도 
#define D 294 // 레 
#define E 330 // 미 
#define F 349 // 파 
#define G 392 // 솔 
#define A 440 // 라 
#define B 494 // 시

const int BUZZER = 10;

const int melody[7] = {
  C,D,E,F,G,A,B,
};
int pinCount = 2;

void setup() {
  Timer1.initialize();
  Timer1.pwm(BUZZER, 0);
  pinMode(BUTTON_PIN, INPUT_PULLUP);

  Timer1.setPwmDuty(BUZZER, 100);

}

void loop() {
  byte buttonState = digitalRead(BUTTON_PIN);
  if (buttonState == LOW){
    for(int note =0; note<8; note++){
      Timer1.setPeriod(1000000/melody[note]);
      delay(500);
      //Timer1.setPwmDuty(BUZZER,0);
    }
  }
  //Timer1.setPwmDuty(BUZZER,0);
}
