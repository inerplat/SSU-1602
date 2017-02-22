int compute_sum(int n)
{
	int i, result=0;
	for (i = 1; i <= n; i++) result += i;
	return result;
}

int main()
{
	int n;
	scanf("%d", &n);
	printf("1부터 %d까지의 합은 %d입니다.\n",n , compute_sum(n));
	return 0;
}
