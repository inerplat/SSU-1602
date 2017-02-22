#include <stdio.h>
int money;
void save(int n)
{
	money += n;
	printf("지금까지 총저축액은 %d입니다.\n", money);
	return;
}
int main()
{
	int n;
	while (1)
	{
		printf("얼마를 저축하시겠습니까?(종료는 -1) : ");
		scanf("%d", &n);
		if (n == -1)
		{
			printf("종료\n");
			return 0;
		}
		save(n);
	}
	return 0;
}
