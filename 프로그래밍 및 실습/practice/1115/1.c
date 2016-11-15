#include <stdio.h>
int main()
{
	int i;
	int grade[5];
	for (i = 0; i <= 4; i++) grade[i] = (i + 1) * 10;
	for (i = 0; i <= 4; i++) printf("grade[%d] = %d\n", i, grade[i]);
	return 0;
}
