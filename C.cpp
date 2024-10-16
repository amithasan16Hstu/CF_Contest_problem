#include <bits/stdc++.h>
using namespace std;

int sumOfDigits(int num) {
   long long int sum = 0;
    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        long long sum = 0;
        for (int i = 1; i <= n; ++i) {
            sum += sumOfDigits(i);
        }

        cout << sum << endl;
    }

    return 0;
}
