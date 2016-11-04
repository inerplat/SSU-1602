#include <stdio.h>
int arr[110];
void prime()
{
	int i, j;
	for (i = 2; i <= 100; i++) arr[i] = i;
	for (i = 2; i <= 100; i++) for (j = 2; j <= 100; j++) if (arr[j] != i && arr[j] % i == 0) arr[j] = 0;
}
int main()
{
	int i;
	int n;
	printf("정수를 입력하세요 : ");
	scanf("%d", &n);
	prime();
	printf("1부터 100까지의 소수\n");
	for (i = 2; i <= 100; i++) if (arr[i] == i) printf("%d ", i);
	printf("\n%d은(는) ",n);
	if (arr[n] == n) printf("소수입니다.\n");
	else printf("소수가 아닙니다.\n");
	return 0;
}
