#include <Servo.h>

const int SERVO = 10;
const int button = 3;
int angle = 0;
Servo servo;

void setup() {
  Serial.begin(9600);
  pinMode(button, INPUT);
  servo.attach(SERVO);
  servo.write(0);
  delay (1000);

}

void loop() {

    int buttonInput = digitalRead(button);
    Serial.println(buttonInput);
    switch(buttonInput){
      case 1:
          angle += 10;
          if (angle > 180) {
            angle = 0;
          }
          servo.write(angle);
          delay(500);
          break;
      case 0:
          angle -= 10;
          if (angle > 180) { 
            angle = 0; 
          }
          servo.write(angle);
          delay(500);
          break;   
      default:
          break;
    }
  

}
