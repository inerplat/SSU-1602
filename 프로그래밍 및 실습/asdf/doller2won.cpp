/*
�ۼ��� : �赿��
�ۼ��� : 2016-09-27
���α׷��� : �޷��� ��ȭ�� �ٲٴ� ���α׷�
*/
/*
#pragma warning (disable : 4996)
#include <stdio.h>
#define ex_rate 112054
int main()
{
	int usd,krw;
	printf("�޷� : ");
	scanf("%d",&usd);
	krw=usd*ex_rate;
	printf("%d�޷��� %d�� �Դϴ�.\n",usd,krw);
	return 0;
}
*/
/*
#pragma warning (disable : 4996)
#include <stdio.h>
#include <limits.h>
int main()
{
	short s=SHRT_MAX;
	unsigned short us=USHRT_MAX;
	++s;
	++us;
	printf("%d %d",s,us);
	return 0;
}
*/
/*
#pragma warning (disable : 4996)
#include <stdio.h>
int main()
{
	int a=10, b=010, c=0x10;
	printf("%d %d %d\n",a,b,c);
	return 0;
}
*/
#pragma warning (disable : 4996)
#include <stdio.h>
struct pay
{
	int m_salary, y_salary;
};
int main()
{
	const months=12;
	pay year;
	printf("������ �Է��ϼ��� : ");
	scanf("%d",&year.m_salary);
	year.y_salary=year.m_salary*months;
	printf("������ %d�� �Դϴ�.\n",year.y_salary);
	return 0;
}