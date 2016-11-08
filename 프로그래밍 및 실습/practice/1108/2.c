#include <stdio.h>
int inc(int cnt)
{
	cnt++;
	return cnt;
}
int main()
{
	int i;
	i = 10;
	printf("함수 호출 전 i = %d\n", i);
	inc(i);
	printf("함수 호출 후 i = %d\n", i);
	return 0;
}
