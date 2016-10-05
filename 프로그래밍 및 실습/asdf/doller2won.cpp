/*
작성자 : 김동현
작성일 : 2016-09-27
프로그램명 : 달러를 원화로 바꾸는 프로그램
*/
/*
#pragma warning (disable : 4996)
#include <stdio.h>
#define ex_rate 112054
int main()
{
	int usd,krw;
	printf("달러 : ");
	scanf("%d",&usd);
	krw=usd*ex_rate;
	printf("%d달러는 %d원 입니다.\n",usd,krw);
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
	printf("월급을 입력하세요 : ");
	scanf("%d",&year.m_salary);
	year.y_salary=year.m_salary*months;
	printf("연봉은 %d원 입니다.\n",year.y_salary);
	return 0;
}