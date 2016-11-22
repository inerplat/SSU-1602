#define GRADE 3
#define SUBJECT 4
#include <stdio.h>
int main()
{
	int s[GRADE][SUBJECT] = { {87,77,75,97},{65,85,90,70},{80,65,95,100} };
	char *a[5] = { "공설","플밍","기공수","물리","평균" };
	int i, j, total=0, subtotal;
	for (j = 0; j <= SUBJECT; j++)
	{
		printf("%s\t", a[j]);
	}
	printf("\n");
	for (i = 0; i < GRADE; i++)
	{
		subtotal = 0;
		for (j = 0; j < SUBJECT; j++)
		{
			printf(" %d\t", s[i][j]);
			subtotal += s[i][j];
		}
		printf("%g\n", (double) subtotal / SUBJECT);
		total += subtotal;
	}
	printf("\n전체 학년 평균 성적 = %d\n", total/(GRADE*SUBJECT));
	return 0;

}
