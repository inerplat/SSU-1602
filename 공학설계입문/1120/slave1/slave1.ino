#include <Wire.h>
#define SLAVE 1
byte c;
void setup() 
{
  pinMode(3,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(2,INPUT_PULLUP);
  pinMode(4,INPUT_PULLUP);
  Wire.begin(SLAVE);
  Wire.onRequest(sendToMaster);
}

void loop() {
  if(digitalRead(2) == LOW)
  {
     c='A';
     /*
     digitalWrite(3, HIGH);
     delay(1000);
     digitalWrite(3, LOW);
     */
  }
  if(digitalRead(4) == LOW)
  {
     c='B';
     /*
     digitalWrite(5, HIGH);
     delay(1000);
     digitalWrite(5, LOW);
     */
  }
}

void sendToMaster() {
  Wire.write(c);
  c='0';
}

