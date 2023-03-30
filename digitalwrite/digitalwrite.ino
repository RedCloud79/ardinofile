const int Led = 13;

void setup() {
  pinMode(Led, OUTPUT);
  //digitalWrite(Led, HIGH);
  //digitalWrite(Led, LOW);
}

void loop() {
  digitalWrite(Led, HIGH);
  delay(100);
  digitalWrite(Led, LOW);
  delay(100);

}
