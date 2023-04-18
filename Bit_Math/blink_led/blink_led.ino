int main(void){
  
	while(1){
   	PORTD |= B10000000;
    _delay_ms(1000); // Wait for 1000 millisecond(s)
    PORTD &= B01111111;
    _delay_ms(1000); // Wait for 1000 millisecond(s)
  }
  
}