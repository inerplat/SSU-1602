/*
���α׷���: 4.c
�ۼ����� : 2016.09.20
�ۼ��� : �赿��
���α׷� ���� : 73������ ����4�� : �޿����� ������ ���ϱ�
*/
#pragma warning (disable : 4996)
#include <stdio.h>
int main()
{
	double d1;

INPUT:
	printf("�����Ը��Է��Ͻÿ� : ");
	scanf("%lf", &d1);

OUTPUT:
	printf("�޿����� �����Դ� %.7fkg�Դϴ�.\n", d1*0.17);

	return 0;
}