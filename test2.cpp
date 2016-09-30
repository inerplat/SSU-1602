#include <iostream>
using namespace std;
int n,m,chk;
int a[1010],b[1010];
int r1, r2, r3;
int back(int s1, int s2, int s3)
{
	if (!chk)
	{
		if (b[s1] + b[s2] + b[s3] == n)
		{
			r1 = s1;
			r2 = s2;
			r3 = s3;

			chk = 1;
			return 1;
		}
		if (b[s1] + b[s2] + b[s3] > n || s1>s2 || s2>s3 || s1>s3)
		{
			return 0;
		}
		back(s1, s2, s3 + 1);
		back(s1, s2 + 1, s3);
		back(s1 + 1, s2, s3);
	}
}
int main()
{
	int i, j;
	cin >> n;
	for (i = 1; i <= n; i++) a[i] = 1;
	for (i = 2; i <= n; i++)
	{
		if (a[i])
		{
			for (j = i*2; j <= n; j += i)
				a[j] = 0;
		}
	}

	for (i = 2; i <= n; i++)
	{
		if(a[i]) b[++m]=i;
	}
	back(1, 1, 1);
	if (!chk) cout << 0;
	else cout << b[r1] << " " << b[r2] << " " << b[r3];
	return 0;
}
