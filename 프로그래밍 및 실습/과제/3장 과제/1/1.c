#include <stdio.h>
#include <math.h>
int main()
{
	int exponent;
	double base,f;
	printf("�Ǽ��� �Է��Ͻÿ� : ");
	scanf("%lf",&f);
// %.4e�� ����ϸ� 89.567�Է½� 8.9567e+001�� ��µǾ� exponent�� base�� ������ ó���߽��ϴ�.
	exponent=(int)floor(log10(fabs(f)));
	base=f*pow(10,-1.0*exponent);

	printf("���� �������δ� %.10ge+%01d�Դϴ�.\n",base,exponent);
	return 0;
}