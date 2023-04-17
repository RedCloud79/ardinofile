int a = 0b01011100;
int b = 0b01100101;
int c = a&b;
int d = a|b;
int e = a^b;
int f = a<<3;
int g = a>>4;
int h = ~a&b;
int i = ~a;

void setup() {
  Serial.begin(9600);
  Serial.println(c);
  Serial.println(d);
  Serial.println(e);
  Serial.println(f);
  Serial.println(g);
  Serial.println(h);
  Serial.println(i);
}

void loop() {
  
  //print(c);
}
