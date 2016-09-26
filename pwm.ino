int LED_pin = 9;
int brightness = 0;
int fadeAmount = 10;

void setup()
{
  pinMode(LED_pin, OUTPUT);
}

void loop()
{
  analogWrite(LED_pin, brightness);
  
  brightness += fadeAmount;
  if(brightness > 255) {
    brightness = 255;
    fadeAmount *= -1;
  }
  if(brightness < 0) {
    brightness = 0;
    fadeAmount *= -1;
  }
  delay(50);
}