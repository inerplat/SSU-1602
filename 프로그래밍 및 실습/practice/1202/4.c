#include <stdio.h>

int avg_height(int *s, int size)
{
	int i;
	int sum=0,avg;
	for (i = 0; i < size; i++) sum += *(s + i);
	avg = sum / size;
	return avg;
}
int main()
{
	int i;
	const int size = 3;
	int student[size];
	for (i = 0; i < size; i++) scanf("%d", &student[i]);
	printf("%d\n",avg_height(student,size));
	return 0;
}
