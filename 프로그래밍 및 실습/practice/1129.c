#include <stdio.h>
int main()
{
	int i;
	double  *pd;
	//pd = &i; 
	*pd = 36.5; // 위험
	return 0;
}
