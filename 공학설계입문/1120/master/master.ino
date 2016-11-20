#include <Wire.h>
#define SLAVE1 1
#define SLAVE2 2 // 슬레이브 주소
char c1='0', c2='0', book_name, book_coord;
int mode=1;
char book[26];
int i;
void setup() {
  Wire.begin(); // Wire 라이브러리 초기화
  Serial.begin(9600); // 직렬 통신 초기화
  Serial.println("I2C");
}
void loop() {
  if(mode==1)
  {
    i2c_communication2(); // 슬레이브로 데이터 요구 및 수신 데이터 처리
    delay(1000);
  }
  else if(mode==2)
  {
    i2c_communication();
    delay(1000);
  }
  else if(mode==3)
  {
    book[book_coord-'A']=book_name;
    mode=1;
    for(i=0;i<=26;i++)
    {
      Serial.print(book[i]);
      Serial.println(" ");
    }
  }
  Serial.print("mode=");
  Serial.println(mode);
}
void i2c_communication() {
  //스위치 인식
  Wire.requestFrom(SLAVE1, 1); // 1 바이트 크기의 데이터 요청
  char c1 = Wire.read(); // 수신 데이터 읽기
  Serial.print("c1=");
  Serial.println(c1); // 수신 데이터 출력
  if(c1>='A' && c1<='Z')
  {
    book_coord=c1;
    c1='0';
    mode=3;
  }
}

void i2c_communication2() {
  //스위치 인식
  Wire.requestFrom(SLAVE2, 1); // 1 바이트 크기의 데이터 요청
  char c2 = Wire.read(); // 수신 데이터 읽기
  Serial.print("c2=");
  Serial.println(c2); // 수신 데이터 출력
  if(c2>='a' && c2<='z')
  {
    book_name=c2;
    c2='0';
    mode=2;
  }
}

