/*
프로그래명: 3.c
작성일자 : 2016.09.20
작성자 : 김동현
프로그램 내용 : 73페이지 과제3번 : 온스->그램 변환
*/
#pragma warning (disable : 4996)
#include <stdio.h>
int main()
{
	double f1, gram;

INPUT:
	printf("온스를 입력하시오 : ");
	scanf("%lf",&f1);

OUTPUT:
	printf("%f온스는 %.6f그램입니다.\n", f1, f1*28.3);

	return 0;
}