/*
작성자 : 김동현
프로그램명 : pr0930Kim20160428.c
프로그램목적 : 원의 면적과 둘레구하기
작성일 : 2016년 9월 30일
*/
/*
#include <stdio.h>
#define area(r) (r*r*pi)
#define girth(r) (2*r*pi)
int main()
{
	double r, s, l;
	const double pi = 3.141592;

	printf("반지름 : ");
	scanf("%lf", &r);
	s = area(r);
	l = girth(r);
	printf("반지름이 %lf인 원의 면적 : %lf\n",r, s);
	printf("반지름이 %lf인 원의 둘레 : %lf\n",r, l);

	return 0;

}
*/
/*
#include <stdio.h>
int main()
{
	int id, pass;
	printf("아이디와 패스워드를 4개의 숫자로 입력하세요\nid : ____\b\b\b\b");
	scanf("%d",&id);
	printf("pass : ____\b\b\b\b");
	scanf("%d", &pass);
	printf("\a입력한 아이디는 \"%d\"이고 패스워드는 \"%d\"입니다.\n", id,pass);
	return 0;
}
*/
#include <stdio.h>
struct INFO
{
	int age, high, weight;
	char* name, blood_type;
};
int main()
{
	int INFO;

	
	return 0;
}
