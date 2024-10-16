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
      int arr[num];
      for (int i = 0; i < num; i++)
      {
         cin >> arr[i];
      }
      long long good_prefixes = 0;
      int prefix_sum = 0;
      long long arr2[num];
      arr2[0] = arr[0];
      for (int i = 2 - 1; i < num; i++)
         arr2[i] = arr[i] + arr2[i - 1];
      for (int j = 0; j < num; j++)
      {
         prefix_sum = max(prefix_sum, arr[j]);
         if (prefix_sum == arr2[j] - prefix_sum)
            good_prefixes++;
      }

      cout << good_prefixes << endl;
   }
   return 0;
}