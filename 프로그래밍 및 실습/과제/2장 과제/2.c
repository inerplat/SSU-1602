/*
프로그래명: 2.c
작성일자 : 2016.09.20
작성자 : 김동현
프로그램 내용 : 73페이지 과제2번 : 센치미터->인치 변환
*/
#pragma warning (disable : 4996)
#include <stdio.h>
int main()
{
	float f1;

INPUT:
	printf("센치미터를 입력하시오 : ");
	scanf("%f", &f1);
	
OUTPUT:
	printf("%fcm는 %f인치입니다.\n", f1, f1 / 2.54);
	
	return 0;
}