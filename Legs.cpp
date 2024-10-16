#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    vector<int> results;

    while (t--) {
        int n;
        cin >> n;

        
        int min_animals = n; 
        
        for (int y = n / 4; y >= 0; y--) {
            int remaining_legs = n - 4 * y;
            if (remaining_legs % 2 == 0) {
                int x = remaining_legs / 2;
                min_animals = min(min_animals, x + y);
            }
        }
        
        results.push_back(min_animals);
    }

    for (int result : results) {
        cout << result << endl;
    }

    return 0;
}
