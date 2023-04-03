const int LED = 10;
int t_high = 0;

unsigned long t_prev = 0;
const unsigned long t_delay = 10;

void setup() {
  
  //pinMode(LED, OUTPUT);
}

void loop() {
  unsigned long t_now = millis();
  if(t_now - t_prev >= t_delay){
    t_prev = t_now;
    t_high++;
    if(t_high>255) t_high = 0;
    digitalWrite(LED, t_high);
  }
  
}
