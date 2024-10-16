#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    
    while (T--) {
        int N;
        cin >> N;
        
        int minutes = 0;
        
        while (N != 50) {
            if (N < 50) {
                N += 2;
            } else if (N > 50) {
                N -= 3;
            }
            minutes++;
        }
        
        cout << minutes << endl;
    }
    
    return 0;
}
