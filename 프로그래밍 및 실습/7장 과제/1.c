#include <stdio.h>
void get_divisor(int n)
{
	int i;
	for (i = 1; i <= n; i++) if(!(n%i)) printf("%d ", i);
	return;
}
int main()
{
	int n;
	printf("정수를 입력하세요 : ");
	scanf("%d", &n);
	printf("%d의 약수\n",n);
	get_divisor(n);
	return 0;
}
