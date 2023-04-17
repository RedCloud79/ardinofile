const int a = 3;
const int b = 5;
const int c = a*b;
const int d = c&b;
const int e = c>>1;
const int f = a^b;

void setup() {
  //Serial.begin(9600);
  DDRD |= B11100000;
  DDRD &= B11100111;
  PIND = B00011000;
  //DDRB |= B00111111;
}

void loop() {
  if(bitRead(PIND, 4)){
    digitalWrite(d, HIGH);
    digitalWrite(e, HIGH);
    digitalWrite(f, HIGH);
    delay(1000);
  }else if (bitRead(PIND, 3)){
    digitalWrite(d, LOW);
    digitalWrite(e, LOW);
    digitalWrite(f, LOW);
    delay(1000);
  }
}
