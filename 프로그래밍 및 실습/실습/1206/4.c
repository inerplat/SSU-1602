#include <stdio.h>
int main(void)
{
	int i = 1, j = 2;
	int *p, *q;
	p = &i;
	q = &j;
	printf("%d %d", *p, *q);
	return 0;
}
