#include <stdio.h>
int main()
{
	int i;
	for(i=0;i<=2;i++) printf("아스키 코드 %c값\n10진수 : %d\n8진수 : 0%o\n16진수 : 0x%x\n\n",'a'+i,'a'+i,'a'+i,'a'+i);
	return 0;
}