#define PI 3.141592
#include <stdio.h>
double circle(double r)
{
	return r*r*PI;
}
int main()
{
	double r,n;
	printf("반지름을 입력하세요 : %");
	scanf("%lf", &r);
	printf("원의 넓이는 %lf입니다\n", circle(r));
	return 0;
}
