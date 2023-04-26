#include <SoftwareSerial.h>
//Initial pin number
const int bluetoothRX = 10;
const int bluetoothTX = 8;
//Define to use bluetooth module
SoftwareSerial ble ( bluetoothTX, bluetoothRX );
void setup() {
  Serial.begin ( 9600 );
  ble.begin ( 9600 );
  pinMode(13, OUTPUT);
}
void loop() {
  if ( ble.available() ) {
    char data = ble.read();
    Serial.println(data);

    if(data == '0'){
      digitalWrite(13, HIGH);

    }
    else if (data == '1'){
      digitalWrite(13, LOW);
    }
  }
}