#include <stdio.h>
char val, state;
int a[3][3];
int check_arr()
{
	int i,j;
	int row_cnt1, row_cnt2, col_cnt1, col_cnt2;
	for(i=0;i<3;i++)
	{
		row_cnt1=0;
		row_cnt2=0;
		col_cnt1=0;
		col_cnt2=0;
		for(j=0;j<3;j++)
		{
			if(a[i][j]==1) row_cnt1++;
			if(a[i][j]==2) row_cnt2++;
			if(a[j][i]==1) col_cnt1++;
			if(a[j][i]==2) col_cnt2++;
		}
		if(row_cnt1==3)
		{
			val='r';
			state=1;
			return i;
		}
		if(row_cnt2==3)
		{
			val='r';
			state=2;
			return i;
		}
		if(col_cnt1==3)
		{
			val='c';
			state=1;
			return i;
		}
		if(col_cnt2==3)
		{
			val='c';
			state=2;
			return i;
		}
	}
	if(a[0][0]==1 && a[1][1]==1 && a[2][2]==1)
	{
		val='t';
		state=1;
		return -1;
	}
	if(a[0][3]==1 && a[1][1]==1 && a[2][0]==1)
	{
		val='t';
		state=1;
		return -1;
	}
	if(a[0][0]==2 && a[1][1]==2 && a[2][2]==2)
	{
		val='t';
		state=2;
		return -1;
	}
	if(a[0][3]==2 && a[1][1]==2 && a[2][0]==2)
	{
		val='t';
		state=2;
		return -1;
	}
	return 0;
}
void print_game()
{
	int i,j;
	printf(" |0 1 2\n--------\n");
	for(i=0;i<3;i++)
	{
		printf("%d|",i);
		for(j=0;j<3;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	return;
}
int main()
{
	int r,c,player=0,t;
	while(1)
	{
		player%=2;
		++player;
		printf("player%d 의 차례입니다.\n",player);
		printf("돌을 놓을 좌표를 선택해 주세요.(행, 열)\n");
		print_game();
		scanf("%d %d",&r,&c);
		if(a[r][c]) 
		{
			printf("이미 돌이 놓여있습니다.\n");
			--player;
			continue;
		}
		a[r][c]=player;
		if(t=check_arr()) break;
		print_game();
	}
	if(val=='t') printf("player%d가 대각선으로 3줄을 완성했습니다.\n",state);
	else if(val=='r') printf("%d행에서 player%d가 3줄을 완성했습니다.\n",t,state);
	else printf("%d열에서 player%d가 3줄을 완성했습니다.\n",t,state);
	print_game();
	return 0;
}
