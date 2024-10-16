#include <bits/stdc++.h>
using namespace std;

int main() {
    string t;
    cin >> t;
    int n = t.length();

   
    for (int len = 1; len < n; ++len) {
        if (n % (n - len) == 0) {
            int k = n / (n - len);
            string s = t.substr(0, n - len);
            string merged = s;
            
            merged += t.substr(n - len, len);

            
            if (merged == t) {
                cout << "YES" << endl;
                cout << s << endl;
                return 0;
            }
        }
    }

    cout << "NO" << endl;
    return 0;
}
