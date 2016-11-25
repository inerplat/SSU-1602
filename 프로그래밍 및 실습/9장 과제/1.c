#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void print_array(int *A,int size)
{
	int i;
	printf("[ ");
	for(i=0;i<size;i++) printf("%d ",*(A+i));
	printf("]\n");
	return;
}

void fill_array(int *A,int size)
{
	int i;
	srand(time(NULL));
	for(i=0;i<size;i++) *(A+i)=rand()%10+1;
	return;
}

void copy_array(int *A, int *B, int size)
{
	int i;
	for(i=0;i<size;i++) *(B+i)=*(A+i);
	return;
}

void plus_array(int *A, int *B, int *C, int size)
{
	int i;
	for(i=0;i<size;i++) *(C+i)=*(A+i)+*(B+i);
}

int get_array_sum(int *A, int size)
{
	int i,sum=0;
	for(i=0;i<size;i++) sum+=*(A+i);
	return sum;
}
int main()
{
	int a[10] = {1,2,3,4,5,6,7,8,9,10};
	int b[10], c[10];
	
	fill_array(b,10);
	
	copy_array(a,c,10);
	print_array(a,10);
	print_array(c,10);
	printf("\n\n");
	
	plus_array(a,b,c,10);
	print_array(a,10);
	print_array(b,10);
	print_array(c,10);
	
	printf("sum = %d\n",get_array_sum(c,10));
	
	return 0;
}