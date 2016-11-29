#include <stdio.h>
int main()
{
	int i = 10;
	int *pi = &i;
	printf("i=%d, pi=%p\n", i, pi);
	(*pi)++;
	printf("i=%d, pi=%p\n", i, pi);
	printf("\ni=%d, pi=%p\n", i, pi);
	*pi++;
	printf("i=%d, pi=%p\n", i, pi);
	return 0;
}
