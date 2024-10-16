#include <bits/stdc++.h>
using namespace std;
int main()
{
   int t;
   cin >> t;

   while (t--)
   {
      int num;
      cin >> num;
      vector<int> vec(num);

      for (int i = 0; i < num; i++)
      {
         cin >> vec[i];
      }

      int total_or = vec[0];
      for (int i = 1; i < num; i++)

         total_or |= vec[i];

      cout << total_or << endl;
   }

   return 0;
}
