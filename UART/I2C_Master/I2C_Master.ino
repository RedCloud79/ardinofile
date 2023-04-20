#include <Wire.h>
#define but_1  3
#define but_2  4

#define SLAVE 4 // 슬레이브 주소
void setup() {
  pinMode(but_1, INPUT);
  pinMode(but_2, INPUT);
  Wire.begin(); // Wire 라이브러리 초기화
  Serial.begin(9600); // 직렬 통신 초기화
  Serial.println("I2C");
}
void loop() {
  if(digitalRead(but_1) == HIGH){
    i2c_communication(); // 슬레이브로 데이터 요구 및 수신 데이터 처리
    delay(500);
  } 
}
void i2c_communication() {
  Wire.requestFrom(SLAVE, 1); // 1 바이트 크기의 데이터 요청
  char c = Wire.read(); // 수신 데이터 읽기
  Serial.println(c); // 수신 데이터 출력
}