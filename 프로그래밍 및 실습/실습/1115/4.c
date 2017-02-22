#include <stdio.h>
#include <stdlib.h>
int main()
{
	int i;
	int sum = 0;
	const int SIZE = 5;
	//int grade[SIZE];
	int *grade=(int *) malloc(sizeof(int)*SIZE);
	for (i = 0; i < SIZE; i++)
	{
		printf("점수를 입력하세요 : ");
		scanf("%d", &grade[i]);
		sum += grade[i];
	}
	for (i = 0; i < SIZE; i++) printf("grade[%d] = %d\n", i, grade[i]);
	printf("점수의 평균은 %g입니다.\n", (double) sum/SIZE);
	free(grade);
	return 0;
}
