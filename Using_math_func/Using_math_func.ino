const int alog = A0;
const int Rled = 7;
const int Yled = 6;
const int Wled = 5;
int senser = 255;
int senser_1 = 0;

void setup() {
  Serial.begin(9600);
  pinMode (Rled,OUTPUT);
  pinMode (Yled,OUTPUT);
  pinMode (Wled,OUTPUT);
}

void loop() {
  int val = analogRead(alog);
  int mal = map(val, 0, 1023, 0, 255);
  Serial.println(mal);
  senser = max(senser, mal);
  Serial.println(senser);
  senser_1 = min(senser_1, mal);
  Serial.println(senser_1);
  delay(500);
  if (senser == mal){
    digitalWrite(Rled, HIGH);
  }else if (senser_1 == mal){
    digitalWrite(Yled, HIGH);
  }else{
    digitalWrite(Rled, LOW);
    digitalWrite(Yled, LOW);
  }

}
