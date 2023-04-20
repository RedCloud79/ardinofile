char message = 'A';

void setup(){
  Serial.begin(9600);
  Serial.println("UART");
}

void loop(){
  // Serial.println(message);
  // message++;
  
  // if(message > 'z'){
  //   message = 'A';
  // }  
  // delay(1000);

  if (Serial.available()){
    char input = Serial.read();

    Serial.println(input);
  }
}