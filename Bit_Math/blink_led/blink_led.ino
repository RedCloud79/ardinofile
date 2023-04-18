int main(void){
  DDRD = B11111111;
  DDRB = B11111111;
	
  while(1){
    for(int i = 0; i<9; i++){
      PORTD = B00000000;
      PORTD -= pow(2,i);
      _delay_ms(500); // Wait for 1000 millisecond(s)
      
      //PORTD = B10010000;
      //_delay_ms(500); // Wait for 1000 millisecond(s)
      //PORTD = B00010000;
      //_delay_ms(500); // Wait for 1000 millisecond(s)
      
      PORTB = B01010101;
      _delay_ms(500); // Wait for 1000 millisecond(s)
      PORTB = B10101010;
      _delay_ms(500); // Wait for 1000 millisecond(s)
    }
  }
}