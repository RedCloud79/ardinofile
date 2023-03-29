void setup()
{
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);
}

void loop()
{
  // 0
  for (int i = 0; i<10; i++){
    if (i==0){
    delay(1000);
    digitalWrite(7,HIGH);
    digitalWrite(8,HIGH);
    digitalWrite(9,HIGH);
    digitalWrite(10,HIGH);
    digitalWrite(11,HIGH);
    digitalWrite(12,HIGH);    
  	delay(1000);
    digitalWrite(7,LOW);
    digitalWrite(8,LOW);
    digitalWrite(9,LOW);
    digitalWrite(10,LOW);
    digitalWrite(11,LOW);
    digitalWrite(12,LOW);
  	delay(1000);
    }
    else if(i ==1){
    digitalWrite(9,HIGH);
    digitalWrite(12,HIGH);
  	delay(1000);
    digitalWrite(9,LOW);
    digitalWrite(12,LOW);
  	delay(1000);
    }
    else if(i ==2){
    digitalWrite(7,HIGH);    
    digitalWrite(9,HIGH);
    digitalWrite(10,HIGH);
    digitalWrite(11,HIGH);    
    digitalWrite(13,HIGH);
  	delay(1000);
    digitalWrite(7,LOW);    
    digitalWrite(9,LOW);
    digitalWrite(10,LOW);
    digitalWrite(11,LOW);
    digitalWrite(13,LOW);
  	delay(1000);
    }
    else if(i ==3){
    digitalWrite(7,HIGH);    
    digitalWrite(9,HIGH);    
    digitalWrite(11,HIGH);
    digitalWrite(12,HIGH);
    digitalWrite(13,HIGH);
  	delay(1000);
    digitalWrite(7,LOW);    
    digitalWrite(9,LOW);    
    digitalWrite(11,LOW);
    digitalWrite(12,LOW);
    digitalWrite(13,LOW);
  	delay(1000);
    }
    else if(i ==4){    
    digitalWrite(8,HIGH);
    digitalWrite(9,HIGH);    
    digitalWrite(12,HIGH);
    digitalWrite(13,HIGH);
  	delay(1000);    
    digitalWrite(8,LOW);
    digitalWrite(9,LOW);
    digitalWrite(12,LOW);
    digitalWrite(13,LOW);
  	delay(1000);
    }
    else if(i ==5){
    digitalWrite(7,HIGH);
    digitalWrite(8,HIGH);   
    digitalWrite(11,HIGH);
    digitalWrite(12,HIGH);
    digitalWrite(13,HIGH);
  	delay(1000);
    digitalWrite(7,LOW);
    digitalWrite(8,LOW);
    digitalWrite(11,LOW);
    digitalWrite(12,LOW);
    digitalWrite(13,LOW);
  	delay(1000);
    }
    else if(i ==6){
    digitalWrite(7,HIGH);
    digitalWrite(8,HIGH);
    digitalWrite(10,HIGH);
    digitalWrite(11,HIGH);
    digitalWrite(12,HIGH);
    digitalWrite(13,HIGH);
  	delay(1000);
    digitalWrite(7,LOW);
    digitalWrite(8,LOW);
    digitalWrite(10,LOW);
    digitalWrite(11,LOW);
    digitalWrite(12,LOW);
    digitalWrite(13,LOW);
  	delay(1000);
    }
    else if(i ==7){
    digitalWrite(7,HIGH);    
    digitalWrite(9,HIGH);
    digitalWrite(12,HIGH);
  	delay(1000);
    digitalWrite(7,LOW);
    digitalWrite(9,LOW);
    digitalWrite(12,LOW);
  	delay(1000);
    }
    else if(i ==8){
    digitalWrite(7,HIGH);
    digitalWrite(8,HIGH);
    digitalWrite(9,HIGH);
    digitalWrite(10,HIGH);
    digitalWrite(11,HIGH);
    digitalWrite(12,HIGH);
    digitalWrite(13,HIGH);
  	delay(1000);
    digitalWrite(7,LOW);
    digitalWrite(8,LOW);
    digitalWrite(9,LOW);
    digitalWrite(10,LOW);
    digitalWrite(11,LOW);
    digitalWrite(12,LOW);
    digitalWrite(13,LOW);
  	delay(1000);
    }
    else if(i ==9){
    digitalWrite(7,HIGH);
    digitalWrite(8,HIGH);
    digitalWrite(9,HIGH);
    digitalWrite(11,HIGH);
    digitalWrite(12,HIGH);
    digitalWrite(13,HIGH);
  	delay(1000);
    digitalWrite(7,LOW);
    digitalWrite(8,LOW);
    digitalWrite(9,LOW);
    digitalWrite(11,LOW);
    digitalWrite(12,LOW);
    digitalWrite(13,LOW);
  	delay(1000);
    }
    
  }
}