#include <stdio.h>
#include <stdlib.h>
int main()
{
	int i;
	int sum = 0;
  //int grade[5];
	int *grade=(int *) malloc(sizeof(int)*5);
	for (i = 0; i <= 4; i++)
	{
		printf("점수를 입력하세요 : ");
		scanf("%d", &grade[i]);
		sum += grade[i];
	}
	for (i = 0; i <= 4; i++) printf("grade[%d] = %d\n", i, grade[i]);
	printf("점수의 합계는 %d입니다.\n", sum);
	free(grade);
	return 0;
}
