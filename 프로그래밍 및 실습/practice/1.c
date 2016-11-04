#include <stdio.h>
int pow(int x, int y)
{
	int i,result=1;
	for (i = 1; i <= y; i++) result *= x;
	return result;
}
int main()
{
	int n;
	n = pow(2, 30);
	printf("%d", n);
	return 0;
}
