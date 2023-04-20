#include <Wire.h>
#define SLAVE 4
#define Led_1 5
#define Led_2 6
#define Led_3 7
//#define but_2  4


byte count = 'A'; // 카운터
void setup() {
  pinMode(Led_1, OUTPUT);
  pinMode(Led_2, OUTPUT);
  pinMode(Led_3, OUTPUT);
  //pinMode(but_2, INPUT);
  // Wire 라이브러리 초기화
  // 슬레이브로 참여하기 위해서는 주소를 지정해야 한다.
  Wire.begin(SLAVE);
  // 마스터의 데이터 전송 요구가 있을 때 처리할 함수 등록
  Wire.onRequest(sendToMaster);
  
}

void loop () {
}

void sendToMaster() {
  
  Wire.write(count++); // 카운터 값을 증가시키고 마스터로 전송
  //delay(2000);
  if(count >= 'z'){
    count = 'A';
  }
  //delay(500);
  
}
