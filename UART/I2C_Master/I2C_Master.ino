#include <Wire.h>
#define but_1  3
#define but_2  4
#define Led_1 5
#define Led_2 6
#define Led_3 7
#define SLAVE 4 // 슬레이브 주소
char c;

void setup() {
  pinMode(but_1, INPUT);
  pinMode(but_2, INPUT);
  pinMode(Led_1, OUTPUT);
  pinMode(Led_2, OUTPUT);
  pinMode(Led_3, OUTPUT);
  Wire.begin(); // Wire 라이브러리 초기화
  Serial.begin(9600); // 직렬 통신 초기화
  Serial.println("I2C");
}
void loop() {
  if(digitalRead(but_1) == HIGH){
     if(c% 2 == 0){
      digitalWrite(Led_1, HIGH);
      digitalWrite(Led_2, HIGH);
      digitalWrite(Led_3, HIGH);
      delay(15);
    }else if(c% 2 != 0){
      digitalWrite(Led_1, LOW);
      digitalWrite(Led_2, LOW);
      digitalWrite(Led_3, LOW);
      delay(15);
    }
  }
  if(digitalRead(but_2) == HIGH){
    i2c_communication();
    //delay(500);
  } 
}
void i2c_communication() {
  Wire.requestFrom(SLAVE, 1); // 1 바이트 크기의 데이터 요청
  c = Wire.read(); // 수신 데이터 읽기
  Serial.println(c); // 수신 데이터 출력
}