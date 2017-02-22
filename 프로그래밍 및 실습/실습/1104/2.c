#include <stdio.h>
int f(int n)
{
	int i, result = 0;
	for (i = 1; i <= n; i++) result += i;
	return  result;
}
int main()
{
	printf("1부터 10까지의합은 %d입니다.",f(10));
	return 0;
}
