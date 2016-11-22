#include <stdio.h>
int main()
{
	int i, str;
	long long n;
	char binary[65];
	scanf("%lld",&n);
	for(i=0;i<64 && n>0;i++)
	{
		binary[i]=n%2;
		n/=2;
	}
	str=i-1;
	for(i=str;i>=0;i--) printf("%d",binary[i]);
	return 0;
}
