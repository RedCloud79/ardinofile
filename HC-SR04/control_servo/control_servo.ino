#include <Servo.h>

const int trigPin = 9;
const int echoPin = 10;
const int led6 = 6;
const int led5 = 5;
const int ser = 11;
Servo servo;

float duration, distance;

void blink(){
  digitalWrite(led5, HIGH);
  delay(500);
  digitalWrite(led5, LOW);
  delay(500);
}

void setup() {
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(led5, OUTPUT);
  pinMode(led6, OUTPUT);
  servo.attach(ser);
  servo.write(180);
  Serial.begin(9600);
}

void loop() {
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

  switch(int(distance)) {
    case 0 ... 9:
        servo.write(0);
        digitalWrite(led6, HIGH);
        break;
    case 10 ... 19:
        servo.write(10);
        digitalWrite(led6, HIGH);
        break;
    case 20 ... 29:
        servo.write(20);
        blink();
        break;
    case 30 ... 39:
        servo.write(40);
        blink();
        break;
    case 40 ... 49:
        servo.write(60);
        blink();
        break;
    case 50 ... 59:
        servo.write(80);
        blink();
        break;
    case 60 ... 69:
        servo.write(120);
        blink();
        break;
    case 70 ... 79:
        servo.write(150);
        blink();
        break;
    case 80 ... 89:
        servo.write(180);
        blink();
        break;
    default:
        digitalWrite(led5, LOW);
        digitalWrite(led6, LOW);
        servo.write(180);
  }  
}