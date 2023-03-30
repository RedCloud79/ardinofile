const int Led = 13;

void setup() {
  pinMode(Led, OUTPUT);
  //digitalWrite(Led, HIGH);
  //digitalWrite(Led, LOW);
}

void loop() {
  for ( int t_high = 0; t_high<=10; t_high++){
    digitalWrite(Led, HIGH);
    delay(t_high);
    digitalWrite(Led, LOW);
    delay(10-t_high);
  }

}
