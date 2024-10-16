#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        string s;
        cin >> n >> s;
        
        vector<int> freq(26, 0);
        
        // Count the frequency of each character
        for (char c : s) {
            freq[c - 'a']++;
        }
        
        // Reconstruct the string based on frequencies
        string result = "";
        for (int i = 0; i < 26; ++i) {
            result += string(freq[i], 'a' + i);
        }
        
        // Output the reordered string
        cout << result << endl;
    }
    
    return 0;
}
