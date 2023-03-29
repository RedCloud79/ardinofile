const int ledPin = 13;
const int inputPin = 2;
const int debounceDelay = 10;

boolean debounce(int pin){
  boolean state;
  boolean previousState;

  previousState = digitalRead(pin);
  for ( int counter =0; counter < debounceDelay; counter++){
    delay(1);
    state = digitalRead(pin);
    if ( state != previousState ){
      counter = 0;
      previousState = state;
    }
  }
  if(state == LOW){
    return true;
  }else{
    return false;
  }
  
}
int count;
void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin, OUTPUT);
  pinMode(inputPin, INPUT);
  Serial.begin(9600);
  
}

void loop() {
  // put your main code here, to run repeatedly:
  if (debounce(inputPin)){
    digitalWrite(ledPin, HIGH);
    count++;
    Serial.println(count);
  }
}
