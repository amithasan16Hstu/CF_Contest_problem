#include <iostream>
#include <string>

using namespace std;

int shortestConcatenatedString(const string& s) {
    int n = s.length();

    // Check if the string consists of only one character
    bool same = true;
    for (int i = 1; i < n; ++i) {
        if (s[i] != s[0]) {
            same = false;
            break;
        }
    }
    if (same) {
        return n;
    }

    // Check if the string is palindrome
    bool palindrome = true;
    for (int i = 0; i < n / 2; ++i) {
        if (s[i] != s[n - i - 1]) {
            palindrome = false;
            break;
        }
    }
    if (palindrome) {
        return n;
    }

    // Check if there is only one character different
    for (int i = 1; i < n; ++i) {
        if (s[i] != s[0]) {
            return n - 1;
        }
    }

    return n / 2 + 1;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        cout << shortestConcatenatedString(s) << endl;
    }

    return 0;
}
