#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    string filename;

    cin >> n >> filename;

    int count = 0;

    for (int i = 0; i <= n - 3; ) {
        
        if (filename[i] == 'x' && filename[i + 1] == 'x' && filename[i + 2] == 'x') {
            count++;
            i += 1; 
        } else {
            i++; 
        }
    }

    cout << count << endl;

    return 0;
}
