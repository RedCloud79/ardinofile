#define BUTTON_PIN 8

const int t1_LED = 13;
int on_off = 0;

const int t2_LED = 10;
int t_high = 0;

unsigned long t1_prev = 0;
const unsigned long t1_delay = 500;

unsigned long t2_prev = 0;
const unsigned long t2_delay = 500;

void setup() {
  pinMode(t1_LED, OUTPUT);
  pinMode(t2_LED, OUTPUT);
  Serial.begin(115200);
  pinMode(BUTTON_PIN, INPUT_PULLUP);
}

void loop() {
  byte buttonState = digitalRead(BUTTON_PIN);
  if(buttonState == LOW){
    unsigned long t1_now = millis();
    if(t1_now - t1_prev >= t1_delay){
      t1_prev = t1_now;
      on_off++;
      digitalWrite(t1_LED, on_off);
      Serial.println(t1_now);
    }
    unsigned long t2_now = millis();
    if(t2_now - t2_prev >= t2_delay){
      t2_prev = t2_now;
      t_high++;
      digitalWrite(t2_LED, t_high);
      Serial.println(t2_now);
    }
  }else{
    if (on_off>1) on_off = 0;
    digitalWrite(t1_LED, on_off);
    if (t_high>1) t_high = 0;
    digitalWrite(t2_LED, t_high);
  }
}
