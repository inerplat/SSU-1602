#include <stdio.h>
int prime(int n)
{
	int tmp = 0, i;
	for (i = 2; i < n; i++)
	{
		if (!(n%i)) ++tmp;
	}
	return tmp;
}
int main()
{
	int i,n,chk=0;
	printf("정수를 입력하세요 : ");
	scanf("%d", &n);
	for (i = 2; i <= 100; i++)
	{
		if (prime(i) == 0)
		{
			printf("%d ", i);
			if (i == n) chk = 1;
		}
	}
	printf("\n%d은(는) ", n);
	if (chk==1) printf("소수입니다.\n");
	else printf("소수가 아닙니다.\n");
	return 0;
}
