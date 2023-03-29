#define BUTTON_PIN 4
int led[] = {8,9,10,11};
int pinCount = 4;
void setup()
{
  for (int i = 0; i < pinCount; i++){
    pinMode(led[i], OUTPUT);
  }
  pinMode(BUTTON_PIN, INPUT_PULLUP);
}

void loop()
{
  byte buttonState = digitalRead(BUTTON_PIN);
  
  if (buttonState == LOW) {
    for ( int i = pinCount; i >= 0; i--){
      digitalWrite(led[i],HIGH);
      delay(1000);
    }
  }
  else {
    for ( int i = 0; i < pinCount; i++){
      digitalWrite(led[i],LOW);
    }
    
  }
}