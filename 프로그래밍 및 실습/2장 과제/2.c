/*
���α׷���: 2.c
�ۼ����� : 2016.09.20
�ۼ��� : �赿��
���α׷� ���� : 73������ ����2�� : ��ġ����->��ġ ��ȯ
*/
#pragma warning (disable : 4996)
#include <stdio.h>
int main()
{
	float f1;

INPUT:
	printf("��ġ���͸� �Է��Ͻÿ� : ");
	scanf("%f", &f1);
	
OUTPUT:
	printf("%fcm�� %f��ġ�Դϴ�.\n", f1, f1 / 2.54);
	
	return 0;
}