#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;

        // Count occurrences of 'A', 'B', 'C', 'D', and '?'
        int countA = 0, countB = 0, countC = 0, countD = 0, countQ = 0;

        for (char c : s) {
            if (c == 'A') countA++;
            else if (c == 'B') countB++;
            else if (c == 'C') countC++;
            else if (c == 'D') countD++;
            else if (c == '?') countQ++;
        }

        // Calculate the shortfall for each option
        int shortfallA = max(0, n - countA);
        int shortfallB = max(0, n - countB);
        int shortfallC = max(0, n - countC);
        int shortfallD = max(0, n - countD);

        // Calculate total shortfall
        int totalShortfall = shortfallA + shortfallB + shortfallC + shortfallD;

        // The maximum score Tim can achieve
        int maxCorrectAnswers = (countA + countB + countC + countD) + min(totalShortfall, countQ);

        cout << maxCorrectAnswers << endl;
    }

    return 0;
}
