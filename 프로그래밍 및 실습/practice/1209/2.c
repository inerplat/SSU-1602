#include <stdio.h>
struct date {
	int year, month, day;
};
struct student {
	int number;
	char *name;
	date dob;
	double grade;
};
int main(void)
{
	student s1;
	s1.dob.year = 1983;
	s1.dob.month = 03;
	s1.dob.day = 29;
}	
