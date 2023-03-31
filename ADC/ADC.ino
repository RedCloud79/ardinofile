int led = 10;
int analogPin = A0;

void setup() {
  pinMode(led, OUTPUT);
}

void loop() {
int val = analogRead(analogPin);
int light = map(val, 0, 1023, 0, 255);
  if (val == 30){
    analogWrite(led, 255); 
    delay(1000);
  }else{
    analogWrite(led, 0);
  }
}

