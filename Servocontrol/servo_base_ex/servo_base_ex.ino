#include <Servo.h>

const int SERVO = 10;
const int button = 3;
Servo servo;

void setup() {
  //Serial.begin(115200);
  pinMode(button, INPUT);
  servo.attach(SERVO);
  servo.write(0);
  delay (1000);

  // for ( int cnt = 0; cnt <= 2; cnt ++){
  //   servo.write(0);
  //   delay(1000);
  //   servo.write(90);
  //   delay(1000);
  //   servo.write(180);
  //   delay(1000);
  //   servo.write(90);
  //   delay(1000);
  // }

  // for ( int angle = 0; angle <= 180; angle++){
  //   servo.write(angle);
  //   delay(50);
  // }

  //servo.detach();
}

void loop() {
  
  if(digitalRead(button) == 1){
    for ( int angle = 0; angle <= 180; angle++){
    servo.write(angle);
    delay(10);
    }
    for ( int angle = 180; angle >= 0; angle--){
    servo.write(angle);
    delay(10);
    } 
  } 
  else servo.write(0);

  
  // if(Serial.available()){
  //   char userInput = Serial.read();

  //   switch(userInput){
  //     case '1':
  //         servo.write(30);
  //         delay(1000);
  //         break;
  //     case '2':
  //         servo.write(90);
  //         delay(1000);
  //         break;
  //     case '3':
  //         servo.write(150);
  //         delay(1000);
  //         break;   
  //     default:
  //         break;
  //   }
  // }

}
