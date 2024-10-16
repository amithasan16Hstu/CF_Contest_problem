#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        long long l, r;
        cin >> l >> r;

        long long diff = r - l;
        long long k = (1 + sqrt(1 + 8 * diff)) / 2;

        cout << k << endl;
    }

    return 0;
}
