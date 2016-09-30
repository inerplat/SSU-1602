#include <stdio.h>
int main()
{
	int asc;
	printf("아스키 코드를 입력해 주세요 : ");
	scanf("%d",&asc);
	printf("아스키코드 %d는 %c입니다.\n",asc,asc);
	return 0;
}