#include <stdio.h>
int main()
{
	double m,p;
	const double t=3.3058;
	printf("면적을 제곱미터 단위로 입력하시오 : ");
	scanf("%lf",&m);
	p=m/t;
	printf("%lf제곱미터는 %lf평 입니다.\n",m,p);
	return 0;
}
