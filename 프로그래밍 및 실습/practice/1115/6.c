#include <stdio.h>
#include <stdlib.h>
int main()
{
	int i;
	const int SIZE = 5;
	//int grade[SIZE];
	int *grade = (int *)malloc(sizeof(int)*SIZE);
	int min = 2147483647;
	for (i = 0; i < SIZE; i++)
	{
		printf("점수를 입력하세요 : ");
		scanf("%d", &grade[i]);
		if (min > grade[i]) min = grade[i];
	}
	printf("최솟값은 %d입니다.\n", min);
	free(grade);
	return 0;
}
