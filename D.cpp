#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int t, n;
    cin >> t;
    for (int l = 0; l < t; l++)
    {
        int flag = 0;
        cin >> n;
        long long int a2 = 10, a3 = 11, a4 = 100, a5 = 101, a6 = 110, a7 = 111, a8 = 1000, a9 = 1001, a10 = 1010, a11 = 1011, a12 = 1100;
        long long int a13 = 1101, a14 = 1110, a15 = 1111, a16 = 10000, a17 = 10001, a18 = 10010, a19 = 10011, a20 = 10100, a21 = 10101, a22 = 10110, a23 = 10111;
        long long int a24 = 11000, a25 = 11001, a26 = 11010, a27 = 11011, a28 = 11100, a29 = 11101, a30 = 11110, a31 = 11111;
        string str;
        str = to_string(n);
        int d = str.size();
        int k = 1;
        for (int i = 0; i < d; i++)
        {
            if (str[i] == '1' || str[i] == '0')
                continue;
            else
            {
                k = 0;
                break;
            }
        }
        if (k == 0)
        {
            while (n % a2 == 0)
            {
                n = n / a2;
            }
            if (n == 1 || n == 0)
                flag = 1;
            while (n % a3 == 0)
            {
                n = n / a3;
            }
            if (n == 1 || n == 0)
                flag = 1;
            while (n % a4 == 0)
            {
                n = n / a4;
            }
            if (n == 1 || n == 0)
                flag = 1;
            while (n % a5 == 0)
            {
                n = n / a5;
            }
            if (n == 1 || n == 0)
                flag = 1;
            while (n % a6 == 0)
            {
                n = n / a6;
            }
            if (n == 1 || n == 0)
                flag = 1;
            while (n % a7 == 0)
            {
                n = n / a7;
            }
            if (n == 1 || n == 0)
                flag = 1;
            while (n % a8 == 0)
            {
                n = n / a8;
            }
            if (n == 1 || n == 0)
                flag = 1;
            while (n % a9 == 0)
            {
                n = n / a9;
            }
            if (n == 1 || n == 0)
                flag = 1;
            while (n % a10 == 0)
            {
                n = n / a10;
            }
            if (n == 1 || n == 0)
                flag = 1;
            while (n % a11 == 0)
            {
                n = n / a11;
            }
            if (n == 1 || n == 0)
                flag = 1;
            while (n % a12 == 0)
            {
                n = n / a12;
            }
            if (n == 1 || n == 0)
                flag = 1;
            while (n % a13 == 0)
            {
                n = n / a13;
            }
            if (n == 1 || n == 0)
                flag = 1;
            while (n % a14 == 0)
            {
                n = n / a14;
            }
            if (n == 1 || n == 0)
                flag = 1;
            while (n % a15 == 0)
            {
                n = n / a15;
            }
            if (n == 1 || n == 0)
                flag = 1;
            while (n % a16 == 0)
            {
                n = n / a16;
            }
            if (n == 1 || n == 0)
                flag = 1;
            while (n % a17 == 0)
            {
                n = n / a17;
            }
            if (n == 1 || n == 0)
                flag = 1;
            while (n % a18 == 0)
            {
                n = n / a18;
            }
            if (n == 1 || n == 0)
                flag = 1;
            while (n % a19 == 0)
            {
                n = n / a19;
            }
            if (n == 1 || n == 0)
                flag = 1;
            while (n % a20 == 0)
            {
                n = n / a20;
            }
            if (n == 1 || n == 0)
                flag = 1;
            while (n % a21 == 0)
            {
                n = n / a21;
            }
            if (n == 1 || n == 0)
                flag = 1;
            while (n % a22 == 0)
            {
                n = n / a22;
            }
            if (n == 1 || n == 0)
                flag = 1;
            while (n % a23 == 0)
            {
                n = n / a23;
            }
            if (n == 1 || n == 0)
                flag = 1;
            while (n % a24 == 0)
            {
                n = n / a24;
            }
            if (n == 1 || n == 0)
                flag = 1;
            while (n % a25 == 0)
            {
                n = n / a25;
            }
            if (n == 1 || n == 0)
                flag = 1;
            while (n % a26 == 0)
            {
                n = n / a26;
            }
            if (n == 1 || n == 0)
                flag = 1;
            while (n % a27 == 0)
            {
                n = n / a27;
            }
            if (n == 1 || n == 0)
                flag = 1;
            while (n % a28 == 0)
            {
                n = n / a28;
            }
            if (n == 1 || n == 0)
                flag = 1;
            while (n % a29 == 0)
            {
                n = n / a29;
            }
            if (n == 1 || n == 0)
                flag = 1;
            while (n % a30 == 0)
            {
                n = n / a30;
            }
            if (n == 1 || n == 0)
                flag = 1;
            while (n % a31 == 0)
            {
                n = n / a31;
            }
            if (n == 1 || n == 0)
                flag = 1;
            if (flag == 1)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
        else
            cout << "YES" << endl;
    }
}