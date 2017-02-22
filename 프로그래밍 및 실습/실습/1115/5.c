#include <stdio.h>
#include <stdlib.h>
int main()
{
	int i;
	const int SIZE = 5;
	int grade[SIZE] = { 10,20,30,40,50 };
	int score[SIZE] = { 89,70,90 };
	int month[] = { 1,2,3,4,5,6,7,8,9,10,11,12 };
	int size = sizeof(month) / sizeof(month[0]);
	for (i = 0; i < size; i++)
	{
		printf("month[%d] = %d\n", i,month[i]);
	}
	return 0;
}
