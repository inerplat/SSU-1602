#include <AddicoreRFID.h>
#include <SPI.h>
#include <Wire.h>
#define SLAVE 1 
#define    uchar    unsigned char
#define    uint    unsigned int
byte c = '0';
uchar serNumA[5];

uchar fifobytes;
uchar fifoValue;

AddicoreRFID myRFID;
const int chipSelectPin = 10;
const int NRSTPD = 5;
const int speakerPin = 8;

#define MAX_LEN 16

void setup() 
{
	Serial.begin(9600);
	Wire.begin(SLAVE);
	SPI.begin();
	Wire.onRequest(sendToMaster);
	pinMode(chipSelectPin, OUTPUT);
	digitalWrite(chipSelectPin, LOW);
	pinMode(NRSTPD, OUTPUT);
	digitalWrite(NRSTPD, HIGH);

	myRFID.AddicoreRFID_Init();
}

void loop()
{
	uchar i, tmp, checksum1;
	uchar status;
	uchar str[MAX_LEN];
	uchar RC_size;
	uchar blockAddr;
	String mynum = "";
	str[1] = 0x4400;


	status = myRFID.AddicoreRFID_Request(PICC_REQIDL, str);
	if (status == MI_OK)
	{
		Serial.println("RFID tag detected");
		Serial.print(str[0], BIN);
		Serial.print(" , ");
		Serial.print(str[1], BIN);
		Serial.println(" ");
	}

	status = myRFID.AddicoreRFID_Anticoll(str);
	if (status == MI_OK)
	{
		checksum1 = str[0] ^ str[1] ^ str[2] ^ str[3];
		Serial.println("The tag's number is  : ");
		Serial.print(str[0]);
		Serial.print(" , ");
		Serial.print(str[1], BIN);
		Serial.print(" , ");
		Serial.print(str[2], BIN);
		Serial.print(" , ");
		Serial.print(str[3], BIN);
		Serial.print(" , ");
		Serial.print(str[4], BIN);
		Serial.print(" , ");
		Serial.println(checksum1, BIN);
		if (str[4] == 20 || str[4] == 250)
		{
			c = 'a';
			str[4] = 0;
			tone(A3, 1760, 100);
		}
		else if (str[4] == 31 || str[4] == 229) {
			c = 'b';
			str[4] = 0;
			tone(A3, 1760, 100);
		}
		else if (str[4] == 224) {
			c = 'c';
			str[4] = 0;
			tone(A3, 1760, 100);
		}
		else if (str[4] == 235) {
			c = 'd';
			str[4] = 0;
			tone(A3, 1760, 100);
		}
		else if (str[4] == 16) {
			c = 'e';
			str[4] = 0;
			tone(A3, 1760, 100);
		}
		else if (str[4] == 21) {
			c = 'f';
			str[4] = 0;
			tone(A3, 1760, 100);
		}
		else if (str[4] == 26) {
			c = 'g';
			str[4] = 0;
			tone(A3, 1760, 100);
		}
		else if (str[4] == 0) {
			c = 'h';
			str[4] = 0;
			tone(A3, 1760, 100);
		}
		else if (str[4] == 4) {
			c = 'i';
			str[4] = 0;
			tone(A3, 1760, 100);
		}
		else if (str[4] == 30) {
			c = 'j';
			str[4] = 0;
			tone(A3, 1760, 100);
		
		else if (str[4] == 27) {
			c = 'k';
			str[4] = 0;
			tone(A3, 1760, 100);
		}
		else if (str[4] == 20) {
			c = 'l';
			str[4] = 0;
			tone(A3, 1760, 100);
		}
		else if (str[4] == 238) {
			c = 'm';
			str[4] = 0;
			tone(A3, 1760, 100);
		}
		else if (str[4] == 225) {
			c = 'n';
			str[4] = 0;
			tone(A3, 1760, 100);
		}
		else if (str[4] == 230) {
			c = 'o';
			str[4] = 0;
			tone(A3, 1760, 100);
		}
		else if (str[4] == 251) {
			c = 'p';
			str[4] = 0;
			tone(A3, 1760, 100);
		}
		else if (str[4] == 254) {
			c = 'q';
			str[4] = 0;
			tone(A3, 1760, 100);
		}
		else if (str[4] == 252) {
			c = 'r';
			str[4] = 0;
			tone(A3, 1760, 100);
		}
		else if (str[4] == 255) {
			c = 's';
			str[4] = 0;
			tone(A3, 1760, 100);
		}
		Serial.println();
		delay(1000);
	}
	myRFID.AddicoreRFID_Halt();
}

void sendToMaster() 
{
	Wire.write(c);
	c = '0';
}
