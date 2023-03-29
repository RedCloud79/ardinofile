const int switchApin = 2;
const int switchBpin = 3;

unsigned long switchTime(int pin, boolean &state, unsigned long &startTime);

void setup() {
  // put your setup code here, to run once:
  pinMode(switchApin, INPUT);
  digitalWrite(switchApin, HIGH);
  pinMode(switchBpin, INPUT);
  digitalWrite(switchBpin, HIGH);
  Serial.begin(9600);
}

void loop() {
unsigned long time;
  Serial.print("switch A time =");
  time = switchATime();
  Serial.println(time);
  Serial.print("switch B time =");
  time = switchBTime();
  Serial.println(time);
  delay(500);
}

unsigned long switchTime(int pin, boolean &state, unsigned long &startTime){
  if(digitalRead(pin) != state){
    state = ! state;
    startTime = millis();
  }
  if( state == LOW){
    return millis() - startTime;
  }else {
    return 0;
  }
}

long switchATime(){
  static unsigned long startTime = 0;
  static boolean state;
  return switchTime(switchApin, state, startTime);
}

long switchBTime(){
  static unsigned long startTime = 0;
  static boolean state;
  return switchTime(switchBpin, state, startTime);
}
