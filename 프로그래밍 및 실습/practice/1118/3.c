#define SIZE 101
#include <stdio.h>
int main()
{
	int freq[SIZE];
	int i, score;
	for (i = 0; i < SIZE; i++) freq[i] = 0;
	while (1)
	{
		printf("숫자를 입력하시오(종료 : -1) : ");
		scanf("%d", &score);
		if (score < 0) break;
		++freq[score];
	}
	printf(" 값\t빈도\n");
	for (i = 0; i < SIZE; i++) printf("%3d\t%3d\n", i, freq[i]);
	return 0;
}
