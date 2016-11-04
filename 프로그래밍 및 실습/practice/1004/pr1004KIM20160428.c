/*
#include <stdio.h>
int main()
{
	float x, y, r;
	scanf("%f %f", &x, &y);
	r = x + y;
	printf("%g + %g = %g\n", x, y, r);
	r = x - y;
	printf("%g - %g = %g\n", x, y, r);
	r = x * y;
	printf("%g * %g = %g\n", x, y, r);
	r = x / y;
	printf("%g / %g = %g\n", x, y, r);
	r = (int)x % (int)y;
	printf("%d %% %d = %g\n",(int)(x),(int)(y), r);

	return 0;
}
*/
typedef int I;
#include <stdio.h>
I main()
{
	I x = 1, nextx = 0;
	x = 0;
	nextx = ++x;
	printf("nextx=%d, x=%d\n", nextx, x);
	x = 0;
	nextx = x++;
	printf("nextx=%d, x=%d\n", nextx, x); 
	x = 0;
	nextx = --x;
	printf("nextx=%d, x=%d\n", nextx, x);
	x = 0;
	nextx = x--;
	printf("nextx=%d, x=%d\n", nextx, x);
	return 0;
}
