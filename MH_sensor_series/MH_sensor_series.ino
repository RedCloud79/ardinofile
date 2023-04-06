
const int IN_A0 = A1; // analog input
const int IN_D0 = 10; // digital input
int value_A0;
bool value_D0;

void setup() {
Serial.begin(9600);
pinMode (IN_A0, INPUT);
pinMode (IN_D0, INPUT);
}

void loop() {
value_A0 = analogRead(IN_A0); // reads the analog input from the IR distance sensor
value_D0 = digitalRead(IN_D0);// reads the digital input from the IR distance sensor
Serial.print(" Analogue = "); 
Serial.print(value_A0);
if(value_D0 == 1){
  Serial.println("\t Digital = Dark"); 
}else {
  Serial.println("\t Digital = Bright"); 
}
delay(100);
}
