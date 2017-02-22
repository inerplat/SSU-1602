#include <stdio.h>
#include <math.h>
int main()
{
	int exponent;
	double base,f;
	printf("실수를 입력하시오 : ");
	scanf("%lf",&f);
// %.4e를 사용하면 89.567입력시 8.9567e+001로 출력되어 exponent와 base로 나누어 처리했습니다.
	exponent=(int)floor(log10(fabs(f)));
	base=f*pow(10,-1.0*exponent);

	printf("지수 형식으로는 %.10ge+%01d입니다.\n",base,exponent);
	return 0;
}