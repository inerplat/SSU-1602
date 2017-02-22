#include <stdio.h>
int sum(int n)
{
	int i,sum=0;
	for (i = 0; i <= n; i++) sum += i;
	return sum;
}
int main()
{
	int i, n;
	printf("정수를입력하시오 : ");
	scanf("%d", &n);
	printf("0부터 %d까지의 합은 %d입니다.\n", n, sum(n));
	return 0;
}
