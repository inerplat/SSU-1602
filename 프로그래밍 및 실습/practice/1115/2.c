#include <stdio.h>
#include <stdlib.h>
int main()
{
	int i;
	int *grade=(int *) malloc(sizeof(int)*5);
	for (i = 0; i <= 4; i++)
	{
		printf("점수를 입력하세요 : ");
		scanf("%d", &grade[i]);
	}
	for (i = 0; i <= 4; i++) printf("grade[%d] = %d\n", i, grade[i]);
	free(grade);
	return 0;
}
