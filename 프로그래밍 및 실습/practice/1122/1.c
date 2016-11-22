#include <stdio.h>
int main()
{
	int arr[3][5];
	int i, j;
	int cnt = 0;
	for (i = 0; i < 3; i++) for (j = 0; j < 5; j++) arr[i][j] = cnt++;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 5; j++) printf("%d ", arr[i][j]);
		printf("\n");
	}
	return 0;
}
