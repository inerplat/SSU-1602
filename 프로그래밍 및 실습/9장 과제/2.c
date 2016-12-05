#include <stdio.h>

void sosu(double *f)
{
	double d;
	int n;
	n=(int) *f;
	d=*f-n;
	printf("정수부분은 %d입니다.\n",n);
	printf("소수점 이하 부분은 %g입니다.\n",d);
	return;
}

int main()
{
	double f;
	printf("실수를 입력하시오 : ");
	scanf("%lf",&f);
	sosu(&f);
	return 0;
}
