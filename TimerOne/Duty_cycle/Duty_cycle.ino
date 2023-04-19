#include <TimerOne.h>

#define LED1_PIN 5 // LED1의 연결 핀 번호
#define LED2_PIN 6 // LED2의 연결 핀 번호
#define LED3_PIN 7 // LED3의 연결 핀 번호

#define BUTTON1_PIN 3 // 버튼1의 연결 핀 번호
#define BUTTON2_PIN 4 // 버튼2의 연결 핀 번호

int led1_dutyCycle = 25; // LED1 듀티 사이클 (%)
int led2_dutyCycle = 50; // LED2 듀티 사이클 (%)
int led3_dutyCycle = 75; // LED3 듀티 사이클 (%)

int led1_counter = 0; // LED1 카운터
int led2_counter = 0; // LED2 카운터
int led3_counter = 0; // LED3 카운터

boolean button1_state = HIGH; // 버튼1 상태
boolean button2_state = HIGH; // 버튼2 상태

void setup() {
  pinMode(LED1_PIN, OUTPUT); // LED1 핀을 출력 모드로 설정
  pinMode(LED2_PIN, OUTPUT); // LED2 핀을 출력 모드로 설정
  pinMode(LED3_PIN, OUTPUT); // LED3 핀을 출력 모드로 설정
  pinMode(BUTTON1_PIN, INPUT_PULLUP); // 버튼1 핀을 풀업 입력 모드로 설정
  pinMode(BUTTON2_PIN, INPUT_PULLUP); // 버튼2 핀을 풀업 입력 모드로 설정

  Timer1.initialize(1000); // Timer1을 1ms 간격으로 초기화
  Timer1.attachInterrupt(timerISR); // Timer1 인터럽트에 timerISR 함수를 연결
}

void loop() {
  // 버튼1 읽기
  boolean button1_prev_state = button1_state;
  button1_state = digitalRead(BUTTON1_PIN);
  if (button1_state == LOW && button1_prev_state == HIGH) {
    // 버튼1이 눌렸을 때
    led1_dutyCycle = (led1_dutyCycle + 25) % 100; // LED1 듀티 사이클 변경
    led2_dutyCycle = (led2_dutyCycle + 25) % 100;
    led3_dutyCycle = (led3_dutyCycle + 25) % 100;
  }

  // 버튼2 읽기
  boolean button2_prev_state = button2_state;
  button2_state = digitalRead(BUTTON2_PIN);
  if (button2_state == LOW && button2_prev_state == HIGH) {
    // 버튼2가 눌렸을 때
    led1_dutyCycle = 0; // LED1 듀티 사이클 0으로 변경
    led2_dutyCycle = 0; // LED2 듀티 사이클 0으로 변경
    led3_dutyCycle = 0; // LED3 듀이 사이클 0으로 변경
  }
}

void timerISR() {
  led1_counter++;
  led2_counter++;
  led3_counter++;

  // LED1 제어
  if (led1_counter <= led1_dutyCycle) {
    digitalWrite(LED1_PIN, HIGH);
  } else {
    digitalWrite(LED1_PIN, LOW);
  }

  // LED2 제어
  if (led2_counter <= led2_dutyCycle) {
    digitalWrite(LED2_PIN, HIGH);
  } else {
    digitalWrite(LED2_PIN, LOW);
  }

  // LED3 제어
  if (led3_counter <= led3_dutyCycle) {
    digitalWrite(LED3_PIN, HIGH);
  } else {
    digitalWrite(LED3_PIN, LOW);
  }

  // LED1, LED2, LED3 카운터 초기화
  if (led1_counter >= 100) {
    led1_counter = 0;
  }
  if (led2_counter >= 100) {
    led2_counter = 0;
  }
  if (led3_counter >= 100) {
    led3_counter = 0;
  }
}
