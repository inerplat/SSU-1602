#include <stdio.h>
#include <math.h>
int main()
{
	double in,base;
	int exponent;
	printf("�Ǽ��� �Է��ϼ��� : ");
	scanf("%lf",&in);
	exponent=(int)floor(log10(fabs(in)));
	base=in*pow(10,-1.0*exponent);

	printf("�Ҽ��� ǥ�� ��� : %lf\n���� ǥ�� ��� : %.10ge+%01d\n",in,base,exponent);
	return 0;
}