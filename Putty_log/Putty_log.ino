const int but_1 = 3;
const int but_2 = 4;
const int light = A1;
int cnt = 0;


void setup() {
  Serial.begin(9600);
  pinMode(but_1, INPUT);
  pinMode(but_2, INPUT);
  pinMode(light, INPUT);
}

void loop() {
  //int lightState = analogRead(light);
  if(digitalRead(but_1) == HIGH){
    Serial.println("테스트 시작");
    cnt++;
    while (cnt >= 1){
      int lightState = analogRead(light);
      Serial.println(lightState);
      delay(1000);
    if(digitalRead(but_2) == HIGH){
      cnt = 0;
      Serial.println("테스트 종료");
      delay(500);
      break;
    }
    }
  }
}
