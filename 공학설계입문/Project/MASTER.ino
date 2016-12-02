#include <Wire.h>
#define SLAVE2 1
char c1 = '0', c2 = '0', book_coord;
int mode = 1;
int book[8][10] = { { 0,0,0,0,0,0,0,0,0,0 },{ 0,0,0,0,0,0,0,0,0,0 },{ 0,0,0,0,0,0,0,0,0,0 },{ 0,0,0,0,0,0,0,0,0,0 },{ 0,0,0,0,0,0,0,0,0,0 },{ 0,0,0,0,0,0,0,0,0,0 },{ 0,0,0,0,0,0,0,0,0,0 },{ 0,0,0,0,0,0,0,0,0,0 } };
int i, j, k;
int book_name;
int tmp;
int latch = 2;
int clock = 3;
int data = 4;
int msg_cnt = 0;

void setup()
{
	pinMode(latch, OUTPUT);
	pinMode(clock, OUTPUT);
	pinMode(data, OUTPUT);
	Wire.begin();
	Serial.begin(9600);
	Serial.println("Ckack Mate");
	for (i = 5; i <= 13; i++) pinMode(i, INPUT_PULLUP);
	pinMode(A0, OUTPUT);
}

void i2c_communication2()
{
	Wire.requestFrom(SLAVE2, 1);
	char c2 = Wire.read();
	if (c2 >= 'a' && c2 <= 'z')
	{
		book_name = c2 - 'a' + 1;
		c2 = '0';
		msg_cnt = 0;
		mode = 2;
	}
}

void loop()
{

	if (digitalRead(5) == LOW && mode != 5)
	{
		Serial.println("Please search for the book that you want");
		mode = 5;
	}



	if (mode == 1)
	{
		if (msg_cnt == 0)
		{
			Serial.println(' ');
			Serial.println("Please tag your book");
			msg_cnt = 1;
		}
		i2c_communication2();
		delay(300);
	}
	else if (mode == 2)
	{
		mode = 3;

		for (i = 0; i <= 7; i++)
		{
			for (j = 1; j <= book[i][0]; j++)
			{
				if (book[i][j] == book_name)
				{
					book[i][j] = 0;
					for (k = j; k < book[i][0]; k++) book[i][k] = book[i][k + 1];
					book[i][k] = 0;
					--book[i][0];
					break;
				}
			}
		}

	}
	else if (mode == 3)
	{
		if (msg_cnt == 0)
		{
			Serial.println("Please select a bookshelves");
			msg_cnt = 1;
		}
		digitalWrite(A0, HIGH);
		if (digitalRead(6) == LOW)
		{
			book[0][++book[0][0]] = book_name;
			mode = 4;
			msg_cnt = 0;
		}
		else if (digitalRead(7) == LOW)
		{
			book[1][++book[1][0]] = book_name;
			mode = 4;
			msg_cnt = 0;
		}
		else if (digitalRead(8) == LOW)
		{
			book[2][++book[2][0]] = book_name;
			mode = 4;
			msg_cnt = 0;
		}
		else if (digitalRead(9) == LOW)
		{
			book[3][++book[3][0]] = book_name;
			mode = 4;
			msg_cnt = 0;
		}
		else if (digitalRead(10) == LOW)
		{
			book[4][++book[4][0]] = book_name;
			mode = 4;
			msg_cnt = 0;
		}
		else if (digitalRead(11) == LOW)
		{
			book[5][++book[5][0]] = book_name;
			mode = 4;
			msg_cnt = 0;
		}
		else if (digitalRead(12) == LOW)
		{
			book[6][++book[6][0]] = book_name;
			mode = 4;
			msg_cnt = 0;
		}
		else if (digitalRead(13) == LOW)
		{
			book[7][++book[7][0]] = book_name;
			mode = 4;
			msg_cnt = 0;
		}

	}
	else if (mode == 4)
	{
		digitalWrite(A0, LOW);
		for (i = 0; i < 8; i++)
		{
			for (j = 0; j <= 9; j++)
			{
				if (book[i][j]) Serial.print(book[i][j]);
				else Serial.print("0");
				Serial.print(" ");
			}
			Serial.println('0');
		}
		Serial.println("Saved!");
		mode = 1;
	}
	else if (mode == 5)
	{
		if (msg_cnt == 0
		{
			Serial.println("Input the title of book");
			msg_cnt = 1;
		}
		delay(100);
		if (Serial.available())
		{
			int cTemp = Serial.read();
			cTemp = cTemp - '0';
			Serial.println(cTemp);
			for (i = 0; i < 8; i++)
			{
				for (j = 1; j <= book[i][0]; j++)
				{
					if (book[i][j] == cTemp)
					{

						digitalWrite(A0, HIGH);
						Serial.println(cTemp);
						digitalWrite(latch, LOW);
						shiftOut(data, clock, MSBFIRST, 1 << i);
						digitalWrite(latch, HIGH);
						delay(3000);
						digitalWrite(latch, LOW);
						shiftOut(data, clock, MSBFIRST, 0);
						digitalWrite(latch, HIGH);
						digitalWrite(A0, LOW);
						msg_cnt = 0;
					}
				}
			}
			mode = 1;
		}
	}

}
