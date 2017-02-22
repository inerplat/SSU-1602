//퀵소트
#define SIZE 10
#include <stdio.h>
int list[SIZE] = { 3,2,9,7,1,4,8,0,6,5 };
void qsort(int start, int end)
{
	int i = start, j = end;
	int tmp;
	int mid = list[(start + end) / 2];
	do
	{
		while (list[i] < mid) i++;
		while (list[j] > mid) j--;
		if (i <= j)
		{
			tmp = list[i]; list[i] = list[j]; list[j] = tmp;
			i++;
			j--;
		}
	} while (i <= j);
	if (start < j) qsort(start, j);
	if (i < end) qsort(i, end);
}
int main()
{
	qsort(0, SIZE);
	for (int i = 0; i < SIZE; i++) printf("%d ",list[i]);
	return 0;
}
