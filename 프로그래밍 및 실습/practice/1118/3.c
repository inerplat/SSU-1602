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
		if ((score > 100 || score < 0) && score != -1)
		{
			printf("잘못된 숫자를 입력하셨습니다.\n\n");
			continue;
		}
		else if(score==-1) break;
		++freq[score];
	}
	printf(" 값\t빈도\n");
	for (i = 0; i < SIZE; i++) printf("%3d\t%3d\n", i, freq[i]);
	return 0;
}
