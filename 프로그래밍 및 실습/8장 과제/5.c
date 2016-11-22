#include <stdio.h>
int main()
{
	int i,j;
	int row_sum, col_sum;
	int a[3][5]={{12,56,32,16,98},{99,56,34,41,3},{65,3,87,78,21}};
	for(i=0;i<3;i++)
	{
		row_sum=0;
		for(j=0;j<5;j++) row_sum+=a[i][j];
		printf("%d행의 합계 : %d\n",i,row_sum);
	}
	printf("\n");
	for(i=0;i<5;i++)
	{
		col_sum=0;
		for(j=0;j<3;j++) col_sum+=a[j][i];
		printf("%d열의 합계 : %d\n",i,col_sum);
	}
	return 0;
}
v
