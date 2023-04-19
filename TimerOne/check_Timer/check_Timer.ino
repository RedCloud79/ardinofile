int main(void){
  Serial.begin(9600);
  TCCR1A = B00000000;
  TCCR1B = B00000101;
  
  while(1){
    Serial.println(TCNT1);
    _delay_ms(500);
  }
}