#define trig 10
#define echo 11
int ON = HIGH;
int OFF = LOW;

int digits[10][7] = {
  {ON, ON, ON, ON, ON, ON, OFF},
  {OFF, ON, ON, OFF, OFF, OFF, OFF},
  {ON, ON, OFF, ON, ON, OFF, ON},
  {ON, ON, ON, ON, OFF, OFF, ON},
  {OFF, ON, ON, OFF, OFF, ON, ON},
  {ON, OFF, ON, ON, OFF, ON, ON},
  {ON, OFF, ON, ON, ON, ON, ON},
  {ON, ON, ON, OFF, OFF, ON, OFF},
  {ON, ON, ON, ON, ON, ON, ON},
  {ON, ON, ON, OFF, OFF, ON, ON}};
  
int pins[] = {2, 3, 4, 5, 6, 7, 8};

void setup() {
  Serial.begin(9600);
  
  pinMode(trig, OUTPUT);
  pinMode(echo, INPUT);
  for(int i = 0; i < 7; i++){
    pinMode(pins[i], OUTPUT);
  }
}

void loop() {
    int duration, distance;
  
  digitalWrite(trig, HIGH);
  delayMicroseconds(1000);
  digitalWrite(trig, LOW);
  
  duration = pulseIn(echo, HIGH);
  distance = (duration/2) / 29.1;
  distance=distance>25 ? 25 : distance;
  if(int(distance/float(2.5))>=0 && int(distance/float(2.5))<10) 
  {
    for(int j = 0; j < 7; j++){

        digitalWrite(pins[j], digits[int(distance/float(2.5))][j]);
      }
  }
  else
  {
  for(int j=0;j<=7;j++)
  {
    digitalWrite(pins[j],LOW);
    
  }
  digitalWrite(0,HIGH);
  }
    delay(1000);
 
}