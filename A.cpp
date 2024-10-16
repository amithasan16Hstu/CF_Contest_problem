// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {

// }
#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, a, b;
        cin >> n >> a >> b;

        
        if (2 * a <= b) {
            cout << n * a << endl;
        } else {
            
            int pairs = n / 2;
            int remainder = n % 2;
            cout << pairs * b + remainder * a << endl;
        }
    }

    return 0;
}
