#include <stdio.h>
#include <math.h>
int main()
{
	int n, i, sum=0, avr=0, var=0, t;
	int a[20];
	printf("숫자의 갯수를 입력해 주세요 : ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("%d번째 숫자를 입력해 주세요 : ",i+1);
		scanf("%d",&a[i]);
		sum+=a[i];
	}
	avr=sum/n;
	for(i=0;i<n;i++) var+=pow(a[i]-avr,2);
	var/=n;
	t=sqrt(var);
	printf("\n평균 : %d\n표준편차 : %d\n",avr,t);
	return 0;
}
