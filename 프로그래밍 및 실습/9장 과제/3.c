#include <stdio.h>

void swap(int *n1, int *n2)
{
	int tmp;
	tmp=*n1;
	*n1=*n2;
	*n2=tmp;
	return;
}

int GCD(int n, int m)
{
	int tmp;
	if(m==0) return n;
	tmp=n%m;
	n=m;
	m=tmp;
	GCD(n,m);
}

int main()
{
	int n,m;
	int g,l;
	printf("첫번째 정수를 입력하시오 : ");
	scanf("%d",&n);
	printf("두번째 정수를 입력하시오 : ");
	scanf("%d",&m);
	if(m>n) swap(&n,&m);
	g=GCD(n,m);
	l=n*m/g;
	printf("최소공배수는 %d 입니다.\n최대공약수는 %d 입니다.\n",l,g);
	return 0;
}
