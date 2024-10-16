#include <bits/stdc++.h>
using namespace std;

const int N = 2e5 + 5;

int main()
{
   int tst;
   cin >> tst;
   while (tst--)
   {
      int n;
      cin >> n;
      if (n % 2 == 1)
      {
         int res = n;
         int ans = 1;
         for (int i = 1; i <= n; i++)
         {
            if (i % 2 == 1)
            {
               cout << res << " ";
               res--;
            }
            else
            {
               cout << ans << " ";
               ans++;
            }
         }
         cout <<endl;
      }
      else
      {
         cout << -1 << endl;
      }
   }
}
