#include <TimerOne.h>

const int LED = 10;

void setup() {
  Serial.begin(9600);
  Timer1.initialize();
  Timer1.pwm(LED, 0);

  Timer1.setPeriod(1000); // 1Hz = 1000000, 10Hz = 1000000/10, 100Hz = 1000000/100
  //Timer1.setPwmDuty(LED, 100); // 0~1023 LED에 대한 상하비
  // Timer1.attachInterrupt(callback);
  //Serial.println(digitalRead(LED));
}

// void callback()
// {
//   int val = digitalRead(LED);//once you comment this line, it works fine
// }


void loop() {
  // noInterrupts();
  // Serial.print("Program running \n");
  // interrupts();
  // delay(1000);
  // int sersor = digitalRead(LED);
  // Serial.println(sersor);
  // delay(100);
  
  for (int i = 0; i< 1023; i++){
    i = i*2;
    Timer1.setPwmDuty(LED, i);
    delay(100);
  }
  

}
