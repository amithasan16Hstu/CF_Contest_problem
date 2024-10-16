#include <bits/stdc++.h>
using namespace std;
int main()
{
   int tst,i,j,k,n;
   cin >> tst;
   for ( k = 0; k < tst; k++)
   {
         int flag = false;
      cin >> n;
      char array[n][n];
      int flag1[n] = {0};
      for ( i = 0; i < n; i++)
      {
         for ( j = 0; j < n; j++)
            cin >> array[i][j];
      }
      for ( i = 0; i < n; i++)
      {
         for ( j = 0; j < n; j++)
         {
            if (array[i][j] == '1')
            {
               flag1[i]++;
            }
         }
      }
      for ( i = 0; i < n - 1; i++)
      {
         if (flag1[i] != 0 && flag1[i] == flag1[i + 1])
            flag = true;
      }
      if (flag == true)
         cout << "SQUARE" << endl;

      else
         cout <<  "TRIANGLE" << endl;
   }
   return 0;
}