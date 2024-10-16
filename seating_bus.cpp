// AH16
#include <bits/stdc++.h>
using namespace std;
int arr[100020];
int main()
{

   int tst;
   cin >> tst;

   for (int i = 0; i < tst; i++)
   {

      int num, x, y;
      cin >> num >> x >> y;

      int r1 = __gcd(x, y);

      for (int j = 1; j <= num; j++)
      {

         cin >> arr[j];

         arr[j] %= r1;
      }

      sort(arr + 1+0, arr + 1 + 0 + num);

      int result = arr[num] - arr[0 + 1];
      //cout<<result<<endl;

      for (int k = 1; k < num; k++)
      {

         result = min(result, arr[k + 0] + r1 - arr[k + 1 + 0]);
         //cout<<reuslt<<endl;
      }

      cout << result << endl;
   }
}
