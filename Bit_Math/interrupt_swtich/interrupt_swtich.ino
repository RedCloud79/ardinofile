ISR(INT0_vect) {
   if (PIND & 0b00000100){ //check if pin2 is high
      PORTD &= 0b01111111; //turn LED off
    } else {
      PORTD |= 0b10000000; //turn LED on
    }
}

ISR(INT1_vect) {
   if (PIND & 0b00001000){ //check if pin3 is high
      PORTD &= 0b10111111; //turn LED off
    } else {
      PORTD |= 0b01000000; //turn LED on
    }
}

int main(void)
{
   DDRD = 0b11000000; //set pin7 as output
   PORTD = 0b00001100; //internal pull-up
  
  EICRA = 0b00000101; //any logical change on INT0
  EIMSK = 0b00000011; //enable INT0
  sei();
  
  while(1) {
//    if (PIND & 0b00010000){ //check if pin4 is high
//      PORTD &= 0b01111111; //turn LED off
//    } else {
//      PORTD |= 0b10000000; //turn LED on
//    }
    
  _delay_ms(2000);
 }
}