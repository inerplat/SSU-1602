#include <stdio.h>
int main()
{
	int i=0;
	int *p = &i;
	i = i + 1;
	printf("%d\n", i);
	i++;
	printf("%d\n", i);
// *p++; 오류
	printf("%d\n", i);
	*p = *p + 1;
	printf("%d\n", i);
}
