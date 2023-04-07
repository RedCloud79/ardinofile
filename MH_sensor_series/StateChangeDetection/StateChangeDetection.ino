const int buttonPin = 3;
int led[3] = {5,6,7};

int buttonPushCounter = 0;
int buttonState = 0;
int lastButtonState = 0;

void setup() {
  pinMode(buttonPin, INPUT);
  for(int i = 0; i < 3; i++){
    pinMode(led[i], OUTPUT);
  }
  Serial.begin(9600);
}


void loop() {
  buttonState = digitalRead(buttonPin);

  if (buttonState != lastButtonState) {
    if (buttonState == HIGH) {
      buttonPushCounter++;
      Serial.println("on");
      Serial.print("number of button pushes: ");
      Serial.println(buttonPushCounter);
    } else {
      Serial.println("off");
    }
    delay(50);
  }
  lastButtonState = buttonState;

  int val = buttonPushCounter % 3;
  
  switch (val){
    case 0:
      break;
    case 1:
      digitalWrite(led[0], HIGH);
      delay(500);
      digitalWrite(led[0], LOW);
      val = 0;
      break;
    case 2:
      digitalWrite(led[1], HIGH);
      delay(500);
      digitalWrite(led[1], LOW);
      val = 0;
      break;
    case 3:
      digitalWrite(led[2], HIGH);
      delay(500);
      digitalWrite(led[2], LOW);
      val = 0;
      break;
  }
}
