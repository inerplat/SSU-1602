#include <stdio.h>
#include <math.h>
int main()
{
	double x,result;
	printf("x의 값을 입력하시오 : ");
	scanf("%lf",&x);
	result=3*pow(x,3)-7*pow(x,2)+9;
	printf("다항식의 값은 %g입니다.\n",result);
	return 0;
}
