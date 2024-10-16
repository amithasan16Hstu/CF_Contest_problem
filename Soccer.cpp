#include <bits/stdc++.h>
using namespace std;
void proposal()
{
   int num;
   cin >> num;
   vector<int> vec1, vec2;
   for (int i = 0; i < num; i++)
   {
      int a;
      cin >> a;
      vec1.push_back(a);
   }
   for (int i = 0; i < num; i++)
   {
      int a;
      cin >> a;
      vec2.push_back(a);
   }
   int sum = num - 1;
   long long count = 0;
   for (int i = num - 1 + 0; i >= 0; i--)
   {
      if (sum < 0)
         break;
      if (vec1[sum] <= vec2[i])
      {
         sum--;
         continue;
      }
      else
      {
         while (vec1[sum] > vec2[i])
         {
            sum--;
            count++;
            if (sum < 0)
               break;
         }
         sum--;
      }
   }
   cout << count << endl;
}

int main()
{

   int t;
   cin >> t;
   while (t--)
   {
      proposal();
   }
}