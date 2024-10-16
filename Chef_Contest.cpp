#include<bits/stdc++.h>
using namespace std;
int main()
{
   int t;
   cin>>t;
   while(t--)
   {
      int x,y,p,q;
      cin>>x>>y>>p>>q;
      if((x+(p*10))<(y+(q*10)))
      cout<<"Chef"<<endl;
      else if((x+(p*10))==(y+(q*10)))
      cout<<"Draw"<<endl;
      else
      cout<<"Chefina"<<endl;
   }
}