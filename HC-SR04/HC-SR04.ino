#define C 262


const int trigPin = 9;
const int echoPin = 10;
const int led = 7;
const int but = 3;

float duration, distance;

void setup() {
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(led, OUTPUT);
  pinMode(but, INPUT);
  Serial.begin(9600);
}

void loop() {
  if(digitalRead(but) == LOW){
    digitalWrite(trigPin, LOW);
    delayMicroseconds(2);
    digitalWrite(trigPin, HIGH);
    delayMicroseconds(10);
    digitalWrite(trigPin, LOW);

    duration = pulseIn(echoPin, HIGH);
    distance = (duration*.0343)/2;
    Serial.print("Distance: ");
    Serial.println(distance);
    delay(100);
    if (distance < 50){
      digitalWrite(led, HIGH);
      tone(11, C, 200);
    }else{
      digitalWrite(led, LOW);
    }
  }
  // else(digitalRead(but) == HIGH){
  //   exit(0);
  // }
}