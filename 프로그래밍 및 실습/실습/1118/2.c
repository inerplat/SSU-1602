#define SIZE 5
#include <stdio.h>
int main()
{
	int grade[SIZE];
	int i, min;
	int i, min=2147483647;
	for(i=0;i<SIZE;i++)
	{
		printf("성적을 입력하시오 : ");
		scanf("%d", &grade[i]);
		if (grade[i] < min) min = grade[i];
	}
	/*
	min = grade[0];
	for (i = 1; i < SIZE; i++) if (grade[i] < min) min = grade[i];
	*/
	printf("최솟값은 %d입니다.\n", min);
	return 0;
}
