#include <stdio.h>
#include <math.h>
int main()
{
	double x,result;
	printf("x�� ���� �Է��Ͻÿ� : ");
	scanf("%lf",&x);
	result=3*pow(x,3)-7*pow(x,2)+9;
	printf("���׽��� ���� %g�Դϴ�.\n",result);
	return 0;
}
