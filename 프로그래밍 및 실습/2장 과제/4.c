/*
프로그래명: 4.c
작성일자 : 2016.09.20
작성자 : 김동현
프로그램 내용 : 73페이지 과제4번 : 달에서의 몸무게 구하기
*/
#pragma warning (disable : 4996)
#include <stdio.h>
int main()
{
	double d1;

INPUT:
	printf("몸무게를입력하시오 : ");
	scanf("%lf", &d1);

OUTPUT:
	printf("달에서의 몸무게는 %.7fkg입니다.\n", d1*0.17);

	return 0;
}