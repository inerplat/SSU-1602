#include <stdio.h>
struct TEST
{
	int sum=0, max=-1, min= 2147483647, avr=0;
};
int main()
{
	int n, i, j;
	int s[11][3];
	TEST test[3],student[11];
	printf("학생 수를 입력하세요 : ");
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("학생 %d의 시험 #%d의 점수를 입력하세요 : ", i + 1, j + 1);
			scanf("%d", &s[i][j]);
			test[j].sum += s[i][j];
			test[j].max = (test[j].max < s[i][j]) ? s[i][j] : test[j].max;
			test[j].min = (test[j].min > s[i][j]) ? s[i][j] : test[j].min;

			student[i].sum += s[i][j];
			student[i].max = (student[i].max < s[i][j]) ? s[i][j] : student[i].max;
			student[i].min = (student[i].min > s[i][j]) ? s[i][j] : student[i].min;
		}
		printf("\n");
	}
	for (i = 0; i < 3; i++)
	{
		printf("시험 #%d의 최고 점수 : %d\n", i + 1, test[i].max);
		printf("시험 #%d의 최저 점수 : %d\n", i + 1, test[i].min);
		printf("시험 #%d의 평균 점수 : %d\n\n", i + 1, test[i].sum/n);
	}
	printf("\n");
	for (i = 0; i < n; i++)
	{
		printf("학생 %d의 최고 점수 : %d\n", i + 1, student[i].max);
		printf("학생 %d의 최저 점수 : %d\n", i + 1, student[i].min);
		printf("학생 %d의 평균 점수 : %d\n\n", i + 1, student[i].sum / 3);
	}
	return 0;
}
