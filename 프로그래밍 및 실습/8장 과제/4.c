#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
	int i,max=0;
	int a[10]={0};
	srand(time(NULL));
	for(i=1;i<=100;i++) ++a[rand()%10];
	for(i=0;i<10;i++) if(a[i]>a[max]) max=i;
	printf("가장 많이 생성된 난수는 %d입니다. (%d번)\n",max,a[max]);
	return 0;
}
