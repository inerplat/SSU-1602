/*
���α׷���: 1.c
�ۼ����� : 2016.09.20
�ۼ��� : �赿��
���α׷� ���� : 73������ ����1�� : ��հ� ���ϱ�
*/
#pragma warning (disable : 4996)
#include <stdio.h>
int main()
{
	int n1, n2, n3;
	int avg;

INPUT:
	printf("������ �Է��Ͻÿ� : ");
	scanf("%d", &n1);
	printf("������ �Է��Ͻÿ� : ");
	scanf("%d", &n2);
	printf("������ �Է��Ͻÿ� : ");
	scanf("%d", &n3);

CALC:
	avg = (n1 + n2 + n3) / 3;

OUTPUT:
	printf("\n\n����� %d�Դϴ�.\n", avg);

	return 0;
}