#include <iostream>
#include <math.h>
using namespace std;
int n, m,l,sum;
int dap;
int t[2100000],a[1200000];
void tree(int k, int sum)
{
   int tt;
   if (k * 2 + 1 > m)
   {
      tt = pow(2, n) - 1;
      a[k-tt+1] = sum;
      return;
   }
   tree(k * 2 + 1, sum + t[k*2+1]);

   tree(k * 2 + 2, sum + t[k * 2 + 2]);
}
int max(int n1, int n2)
{
   return n1 > n2 ? n1 : n2;
}

int main()
{
   int i, j;
   cin >> n;
   m = pow(2, n + 1) - 2;
   for (i = 1; i <= m; i++)
   {
      cin >> t[i];
      dap += t[i];
   }
   tree(0,0);
   m = pow(2, n);
   for (i = 1; i <= n; i++)
   {
      l = pow(2, i);
      for (j = 1; j <= m; j += l)
      {
         dap += abs(a[j] - a[j+l-1]);
         a[j] = a[j+l-1] = max(a[j], a[j+l-1]);
      }
   }
   cout << dap;
   return 0;
}
