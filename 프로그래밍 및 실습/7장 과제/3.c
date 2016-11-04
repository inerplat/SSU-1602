#include <stdio.h>
int arr[110];
int ipower(int x,int y)
{
	int i,r=1;
	if (y == 0) return 1;
	for (i = 1; i <= y; i++) r *= x;
	return r;
}
int main()
{
	int i;
	printf("3^0부터 3^10까지의 값 : \n");
	for (i = 0; i <= 10; i++) printf("%d ", ipower(3, i));
	printf("\n");
	return 0;
}
