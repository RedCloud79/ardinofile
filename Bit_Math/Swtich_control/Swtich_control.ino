int main(void){
  DDRD = B00100000;
  PORTD |= 1<<4;
  
  while(1){
    if(!(PIND&(1<<4))){
        PORTD = B00100000;
         _delay_ms(500);
         
    }
    if((PIND&(1<<4))){
      PORTD = B00000000;
         _delay_ms(500);
    }
  }
}