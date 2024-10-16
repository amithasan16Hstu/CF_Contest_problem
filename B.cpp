#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n,b,c;
        cin>>n>>b>>c;
        vector<int>vec,vec1;
        for(int i=0; i<n*n; i++)
        {
            int k;
            cin>>k;
            vec.push_back(k);
        }
        sort(vec.begin(),vec.end());
        int arr[n][n];
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)
            {
                if(i==0 && j==0)
                {
                    arr[i][j]=vec[0];
                }
                else if(j==0)
                {
                    arr[i][j]=arr[i-1][j]+b;
                }
                else
                {
                   arr[i][j] = arr[i][j-1]+c;
                }
                vec1.push_back(arr[i][j]);
            }
        }
        sort(vec1.begin(),vec1.end());
        int flag=false;
        for(int i=0; i<n*n; i++)
        {
            if(vec[i]!=vec1[i])
            {
                flag=true;
                break;
            }
        }
        if(flag==true)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }
    }

    return 0;
}