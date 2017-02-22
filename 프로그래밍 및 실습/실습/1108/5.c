#include <stdio.h>
void sub()
{
	int auto_count = 0;
	static int static_count = 0;
	auto_count++;
	static_count++;
	printf("auto_count=%d\n", auto_count);
	printf("static_count=%d\n\n", static_count);
	return;
}
int main()
{
	int i;
	for (i = 0; i < 3; i++) sub();
	return 0;
}
