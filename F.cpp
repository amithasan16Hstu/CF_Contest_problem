#include <bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7;

long long modExp(long long a, long long b, long long c)
{
   long long result = 1;
   while (b > 0)
   {
      if (b & 1)
      {
         result = (result * a) % c;
      }
      a = (a * a) % c;
      b >>= 1;
   }
   return result;
}

int main()
{
   int tst;
   cin >> tst;
   for (int i = 0; i < tst; i++)
   {
      int n;
      cin >> n;

      vector<long long> vec(n);
      long long sumAll = 0, sumSquares = 0;

      for (int j = 0; j < n; j++)
      {
         cin >> vec[j];
         sumAll = (sumAll + vec[j]) % MOD;
         sumSquares = (sumSquares + (vec[j] * vec[j]) % MOD) % MOD;
      }

      long long S = (sumAll * sumAll - sumSquares + MOD) % MOD;
      S = (S * modExp(2, MOD - 2, MOD)) % MOD; 

      long long P = S;
      long long Q = ((1LL * n * (n - 1)) / 2) % MOD;
      long long Q_inv = modExp(Q, MOD - 2, MOD);

      long long result = (P * Q_inv) % MOD;
      cout << result << endl;
   }

   return 0;
}
