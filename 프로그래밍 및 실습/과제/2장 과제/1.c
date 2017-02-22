/*
프로그래명: 1.c
작성일자 : 2016.09.20
작성자 : 김동현
프로그램 내용 : 73페이지 과제1번 : 평균값 구하기
*/
#pragma warning (disable : 4996)
#include <stdio.h>
int main()
{
	int n1, n2, n3;
	int avg;

INPUT:
	printf("점수를 입력하시오 : ");
	scanf("%d", &n1);
	printf("점수를 입력하시오 : ");
	scanf("%d", &n2);
	printf("점수를 입력하시오 : ");
	scanf("%d", &n3);

CALC:
	avg = (n1 + n2 + n3) / 3;

OUTPUT:
	printf("\n\n평균은 %d입니다.\n", avg);

	return 0;
}