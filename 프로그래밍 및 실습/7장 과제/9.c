#include <stdio.h>
int plus(int x, int y)
{
	static int cnt=0;
	printf("연산결과 : %d\n", x + y);
	return ++cnt;
}
int minus(int x, int y)
{
	static int cnt = 0;
	printf("연산결과 : %d\n", x - y);
	return ++cnt;
}
int multi(int x, int y)
{
	static int cnt = 0;
	printf("연산결과 : %d\n", x * y);
	return ++cnt;
}
int division(int x, int y)
{
	static int cnt = 0;
	printf("연산결과 : %d\n", x / y);
	return ++cnt;
}
int main()
{
	int x, y, cnt;
	char c;
	while (1)
	{
		printf("\n연산을 입력하시오 : ");
		scanf("%d %c %d", &x, &c, &y);
		if (c == '+')
		{
			cnt = plus(x, y);
			printf("덧셈은 총 %d번 실행되었습니다.\n", cnt);
		}
		else if (c == '-')
		{
			cnt = minus(x, y);
			printf("뺄셈은 총 %d번 실행되었습니다.\n", cnt);
		}
		else if (c == '*')
		{
			cnt = multi(x, y);
			printf("곱셈은 총 %d번 실행되었습니다.\n", cnt);
		}
		else if (c == '/')		
		{
			cnt = division(x, y);
			printf("나눗셈은 총 %d번 실행되었습니다.\n", cnt);
		}
		else
		{
			printf("잘못된 기호를 입력하셨습니다.\n");
			continue;
		}
	}
	return 0;
}
