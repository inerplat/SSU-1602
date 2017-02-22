#include <stdio.h>
int main()
{
	printf("char 형의 크기는 %d바이트입니다.\n",sizeof(char));
	printf("unsigned char 형의 크기는 %d바이트입니다.\n",sizeof(unsigned char));

	printf("int 형의 크기는 %d바이트입니다.\n",sizeof(int));
	printf("unsigned int 형의 크기는 %d바이트입니다.\n",sizeof(unsigned int));
	
	printf("float 형의 크기는 %d바이트입니다.\n",sizeof(float));
	printf("unsigned float 형의 크기는 %d바이트입니다.\n",sizeof(unsigned float));
	
	printf("double 형의 크기는 %d바이트입니다.\n",sizeof(double));
	printf("unsigned double 형의 크기는 %d바이트입니다.\n",sizeof(unsigned double));
	
	printf("long 형의 크기는 %d바이트입니다.\n",sizeof(long));
	printf("unsigned long 형의 크기는 %d바이트입니다.\n",sizeof(unsigned long));
	
	printf("long long 형의 크기는 %d바이트입니다.\n",sizeof(long long));
	printf("unsigned long long 형의 크기는 %d바이트입니다.\n",sizeof(unsigned long long));
	return 0;
}
