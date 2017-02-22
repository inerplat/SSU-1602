#include <stdio.h>

//double f(double x, double y);
//int f(int x, int y);
//int f(int x, int y);
//float get_area(float radius, float pi);
int f(int x, int y);
int main()
{
	printf("%d\n", f(12, 3));
	return 0;
}
int f(int x, int y)
{
	if ((x%y) == 0) return 1;
	else return 0;
}
