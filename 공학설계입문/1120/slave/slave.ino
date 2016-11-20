#include <AddicoreRFID.h>
#include <SPI.h>
#include <Wire.h>
#define SLAVE 2 
#define    uchar    unsigned char
#define    uint    unsigned int
byte c = '0';
//4 bytes tag serial number, the first 5 bytes for the checksum byte
uchar serNumA[5];
 
uchar fifobytes;
uchar fifoValue;
 
AddicoreRFID myRFID; // create AddicoreRFID object to control the RFID module
 
/////////////////////////////////////////////////////////////////////
//set the pins
/////////////////////////////////////////////////////////////////////
const int chipSelectPin = 10;
const int NRSTPD = 5;
const int speakerPin = 8; //스피커가 연결된 디지털핀 설정
 
//Maximum length of the array
#define MAX_LEN 16
 
void setup() {                
  Serial.begin(9600);                        // 시리얼 모니터 출력 설정
  Wire.begin(SLAVE);
  // start the SPI library:
  SPI.begin();
  Wire.onRequest(sendToMaster);
  pinMode(chipSelectPin,OUTPUT);              // Set digital pin 10 as OUTPUT to connect it to the RFID /ENABLE pin 
  digitalWrite(chipSelectPin, LOW);         // Activate the RFID reader
  pinMode(NRSTPD,OUTPUT);                     // Set digital pin 10 , Not Reset and Power-down
  digitalWrite(NRSTPD, HIGH);
 
  myRFID.AddicoreRFID_Init();  
}
 
void loop()
{
  uchar i, tmp, checksum1;
    uchar status;
  uchar str[MAX_LEN];
  uchar RC_size;
  uchar blockAddr;    //Selection operation block address 0 to 63
  String mynum = "";
  str[1] = 0x4400;
        
    //RFID 태그의 타입을 리턴
    status = myRFID.AddicoreRFID_Request(PICC_REQIDL, str);    
    if (status == MI_OK)    //MIFARE 카드일때만 작동
    {
          tone(speakerPin,2000,100);
          Serial.println("RFID tag detected");
            Serial.print(str[0],BIN);
          Serial.print(" , ");
            Serial.print(str[1],BIN);
          Serial.println(" ");
    }
 
  //RFID 충돌방지, RFID 태그의 ID값(시리얼넘버) 등 저장된 값을 리턴함. 4Byte
    status = myRFID.AddicoreRFID_Anticoll(str);
    if (status == MI_OK)      //MIFARE 카드일때만 작동
    {
          checksum1 = str[0] ^ str[1] ^ str[2] ^ str[3];
          Serial.println("The tag's number is  : ");
            //Serial.print(2);
            Serial.print(str[0]);
          Serial.print(" , ");
            Serial.print(str[1],BIN);
          Serial.print(" , ");
            Serial.print(str[2],BIN);
          Serial.print(" , ");
            Serial.print(str[3],BIN);
          Serial.print(" , ");
            Serial.print(str[4],BIN);
          Serial.print(" , ");
          Serial.println(checksum1,BIN);
           
            // Should really check all pairs, but for now we'll just use the first
            if(str[4] == 20)                      //RFID 태그의 ID값이 224번이면 Gil Dong의 카드
            {
                Serial.print("Hello Gil Dong!\n");
                c='a';
                str[4]=0;
                delay(1000);
            } 
            else if(str[4] == 31) {             //RFID 태그의 ID값이 170번이면 Kang Min의 카드
                Serial.print("Hello Kang Min!\n");
                c='b';
                str[4]=0;
                delay(1000);
            }
            Serial.println();
            delay(1000);
    }
        myRFID.AddicoreRFID_Halt();           //Command tag into hibernation              
}

void sendToMaster() {
  Wire.write(c);
  c='0';
}
