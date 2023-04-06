#define C 262
#define D 294
#define E 330
#define F 349
#define G 392
#define A 440
#define B 494
#define hC 523


const int trigPin = 9;
const int echoPin = 10;
const int led7 = 7;
const int led6 = 6;
const int led5 = 5;
const int but = 3;
const int but4 = 4;

float duration, distance;

void setup() {
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(led5, OUTPUT);
  pinMode(led6, OUTPUT);
  pinMode(led7, OUTPUT);
  pinMode(but, INPUT);
  pinMode(but4, INPUT);
  Serial.begin(9600);
}

void loop() {
  int count = 0;
  if(digitalRead(but4) == HIGH){
    count = count + 1;
  }
  while(count == 1){
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

      switch(int(distance)) {
        case 10 ... 19:
            digitalWrite(led5, HIGH);
            tone(11, C, 200);
            break;
        case 20 ... 29:
            digitalWrite(led6, HIGH);
            tone(11, D, 200);
            break;
        case 30 ... 39:
            digitalWrite(led7, HIGH);
            tone(11, E, 200);
            break;
        case 40 ... 49:
            digitalWrite(led5, HIGH);
            tone(11, F, 200);
            break;
        case 50 ... 59:
            digitalWrite(led6, HIGH);
            tone(11, G, 200);
            break;
        case 60 ... 69:
            digitalWrite(led7, HIGH);
            tone(11, A, 200);
            break;
        case 70 ... 79:
            digitalWrite(led5, HIGH);
            tone(11, B, 200);
            break;
        case 80 ... 89:
            digitalWrite(led6, HIGH);
            tone(11, hC, 200);
            break;
        default:
            digitalWrite(led5, LOW);
            digitalWrite(led6, LOW);
            digitalWrite(led7, LOW);
      } 
      // if (distance < 50){
      //   digitalWrite(led, HIGH);
      //   tone(11, C, 200);
      // }else{
      //   digitalWrite(led, LOW);
      // }
    }
    else{
      count = 0;
    }
  }
}