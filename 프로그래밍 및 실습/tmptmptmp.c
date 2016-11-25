#include <stdio.h>
void sosu(double *a)
{
	int b = *a;
	printf("정수부분은 %d입니다.\n", b);
	printf("소수점이하부분은 %g입니다.\n",*a - b);
	return;
}
int main()
{
	int n;
	double f;
	printf("실수를 입력하시오 : ");
	scanf("%lf", &f);
	sosu(&f);
}
