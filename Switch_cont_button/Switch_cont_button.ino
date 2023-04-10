/*
  https://www.arduino.cc/en/Tutorial/BuiltInExamples/StateChangeDetection
*/

// this constant won't change:
const int Bbutton = 3;  // the pin that the pushbutton is attached to
const int Gbutton = 4;
const int Wled =5;    // the pin that the LED is attached to
const int sensor_pin = A0;
const int Yled =6;
const int Rled =7;

int threesec = 0;


// Variables will change:
int buttonPushCounter = 0;  // counter for the number of button presses
int buttonState = 0;        // current state of the button
int buttonState_1 = 0;
int lastButtonState = 0;    // previous state of the button
int button_pressed = 0;
int button_depressed = 1;
int buttonHigh =0;
void setup() 
{
  // initialize the button pin as a input:
  pinMode(Bbutton, INPUT);
  pinMode(Gbutton, INPUT);
  // initialize the LED as an output:
  pinMode(Wled, OUTPUT);
  pinMode(Yled, OUTPUT);
  pinMode(Rled, OUTPUT);
  // initialize serial communication:
  Serial.begin(9600);
}


void loop()
 {
 buttonState = digitalRead(Bbutton); 
 buttonState_1 = digitalRead(Gbutton);    
int button_state;
  if (buttonState != lastButtonState) buttonHigh=buttonCheck(button_state);
  inturthree();
}
int buttonCheck(int button_vlaue) {
    
 if (buttonState)
  {
     button_depressed ++;
     if(button_depressed == 160)
     {
     button_depressed = 0;
     buttonPushCounter++;
     Serial.println("OFF");
     digitalWrite(Wled, HIGH);
     lastButtonState = buttonState; 

     }
     
     return 1;
   } 
   else
   { 
      button_pressed ++;
     if (button_pressed == 160)
     { 
     button_pressed=0;
     Serial.println("ON");
     digitalWrite(Wled, LOW);
     
     lastButtonState = buttonState; 
     }
     
     return 0;
   }
}  

void inturthree(){
  threesec++;
  if (threesec >= 3000){
    if(buttonState_1 == HIGH){
      digitalWrite(Yled, HIGH);
      
    }else{
      digitalWrite(Yled, LOW);
      threesec = 0;
    }
    millis();
  }
}