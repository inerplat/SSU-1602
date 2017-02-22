#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
	int i,max=0;
	int a[7]={0};
	srand(time(NULL));
	for(i=1;i<=60000;i++) ++a[rand()%6+1];
	printf("주사위면\t빈도\n");
	for(i=1;i<=6;i++) printf(" %d\t\t%d\n",i,a[i]);
	return 0;
}
