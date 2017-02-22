#include <stdio.h>
int sum = 1;
int main()
{
	int i = 0;
	int sum = 0;
	for (i = 0; i <= 10; i++) sum += i;
	printf("%d\n", sum);
	return 0;
}
