const int sensorMin = 0;
const int sensorMax = 600;
const int buttonPin = 3;
int led[3] = {5,6,7};

int buttonPushCounter = 0;
int buttonState = 0;
int lastButtonState = 0;

void setup() {
  for(int i = 0; i < 3; i++){
    pinMode(led[i], OUTPUT);
  }
  Serial.begin(9600);
  pinMode(buttonPin, INPUT);
}

void loop() {
  int sensorReading = analogRead(A1);
  int range = map(sensorReading, sensorMin, sensorMax, 0, 3);
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

  if(buttonPushCounter % 2 == 0){
    switch (range) {
      case 3:
        Serial.println("dark");
        tone(11, 262, 200);
        for(int i = 0; i < 3; i++){
        digitalWrite(led[i], LOW);
        }
        break;
      case 2:
        Serial.println("dim");
        tone(11, 294, 200);
        for(int i = 2; i < 3; i++){
        digitalWrite(led[i], HIGH);
        }
        digitalWrite(led[1], LOW);
        break;
      case 1:
        Serial.println("medium");
        for(int i = 1; i < 3; i++){
        tone(11, 330, 200);
        digitalWrite(led[i], HIGH);
        }
        digitalWrite(led[0], LOW);
        break;
      case 0:
        Serial.println("bright");
        tone(11, 349, 200);
        for(int i = 0; i < 3; i++){
        digitalWrite(led[i], HIGH);
        }
        break;
    }
  }else{
    //break;
  }
  delay(1);
}