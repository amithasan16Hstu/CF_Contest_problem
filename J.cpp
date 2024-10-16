#include <iostream>
#include <vector>

using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        
        vector<int> a(n);
        int bitwise_or = 0;
        
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
            bitwise_or |= a[i];
        }
        
        // Minimum sum is the bitwise OR value multiplied by the number of elements
        long long min_sum = (long long)bitwise_or * n;
        cout << min_sum << endl;
    }
    
    return 0;
}
