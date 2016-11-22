#include <stdio.h>
void print_seat(int a[])
{
	int i;
	printf("-----------------------------\n");
	printf("1 2 3 4 5 6 7 8 9 10\n");
	printf("-----------------------------\n");
	for(i=0;i<10;i++) printf("%d ",a[i]);
	printf("\n\n");
	return;
}
int main()
{
	int a[10]={0};
	int state;
	while(1)
	{
		printf("좌석을 예약하시겠습니까?(1 또는 0) : ");
		scanf("%d",&state);
		if(!state) return 0;
		printf("현재의 예약상태는 다음과 같습니다.\n");
		print_seat(a);
		printf("몇번째 좌석을 예약하시겠습니까? : ");
		scanf("%d",&state);
		if(a[state-1])
		{
			printf("이미 예약된 좌석입니다.\n");
			continue;
		}
		a[state-1]=1;
		printf("예약 되었습니다.\n");
		print_seat(a);
	}
	return 0;
}
