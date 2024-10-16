#include <iostream>
#include <string>
#include <vector>

using namespace std;

// Function to calculate the typing time for a given string
int calculateTypingTime(const string &s) {
    int time = 2; // Time to type the first character
    for (int i = 1; i < s.length(); ++i) {
        if (s[i] == s[i-1]) {
            time += 1; // Same character as previous
        } else {
            time += 2; // Different character
        }
    }
    return time;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        
        string best_password = "";
        int max_time = 0;

        // Try inserting every possible lowercase Latin letter at every possible position
        for (char c = 'a'; c <= 'z'; ++c) {
            for (int i = 0; i <= s.length(); ++i) {
                string new_password = s.substr(0, i) + c + s.substr(i);
                int typing_time = calculateTypingTime(new_password);
                
                if (typing_time > max_time) {
                    max_time = typing_time;
                    best_password = new_password;
                }
            }
        }

        cout << best_password << endl;
    }

    return 0;
}
