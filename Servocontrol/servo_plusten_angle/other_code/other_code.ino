#include <Servo.h>

Servo myservo;  // 서보모터 객체 생성
int buttonPin = 3; // 버튼 핀
int servoPin = 10;  // 서보모터 핀
int buttonState = 0;  // 버튼 상태
int angle = 0;  // 현재 각도

void setup() {
  myservo.attach(servoPin);  // 서보모터를 10번 핀에 연결
  pinMode(buttonPin, INPUT);  // 버튼 핀을 입력으로 설정
}

void loop() {
  buttonState = digitalRead(buttonPin);  // 버튼 상태를 읽음
  
  // 버튼을 누르면
  if (buttonState == HIGH) {
    angle += 10;  // 각도를 10도 증가
    if (angle > 180) {  // 최대 각도(90도)에 도달하면
      angle = 0;  // 각도를 0으로 초기화
    }
    myservo.write(angle);  // 현재 각도로 서보모터를 회전
    delay(1000);  // 0.1초간 대기
  }
}
