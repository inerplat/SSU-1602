#include <stdio.h>

int add(int x, int y)
{
	return x + y;
}
int sub(int x, int y)
{
	return x - y;
}

int main(void)
{
	int result;
	int(*pf)(int, int);
	pf = add;
	result = pf(10, 20);
	printf("10+20은 %d\n", result);
	pf = sub;
	result = pf(10, 20);
	printf("10-20은 %d\n", result);
	return 0;
}
