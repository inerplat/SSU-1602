#include <stdio.h>
#include <math.h>
int get_line_parameter(int x1, int y1, int x2, int y2, float *slope, float *yintercept)
{
	if (x1 == x2) return -1;
	*slope = abs(y2 - y1) / abs(x2 - x1);
	*yintercept = y1 - x1*(*slope);
	return 0;
}

int main()
{
	float s, y;
	if (get_line_parameter(3, 3, 6, 6, &s, &y) == -1) 
		printf("에러\n");
	else
		printf("기울기는 %f, y절편은 %f\n", s, y);
	return 0;
}

