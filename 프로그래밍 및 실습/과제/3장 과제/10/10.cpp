#include <stdio.h>
#include <math.h>
int main()
{
	double in,base;
	int exponent;
	printf("실수를 입력하세요 : ");
	scanf("%lf",&in);
	exponent=(int)floor(log10(fabs(in)));
	base=in*pow(10,-1.0*exponent);

	printf("소수점 표기 방법 : %lf\n지수 표기 방법 : %.10ge+%01d\n",in,base,exponent);
	return 0;
}