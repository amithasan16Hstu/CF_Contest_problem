#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t; // Number of test cases

    while (t--) {
        int x, y, z, k;
        cin >> x >> y >> z >> k; // Dimensions of the box and the volume of the secret box

        int max_placements = 0;

        // Iterate over all possible dimensions (a, b, c) of the secret box S
        for (int a = 1; a <= x; ++a) {
            if (k % a != 0) continue;
            int ab_volume = k / a;
            for (int b = 1; b <= y; ++b) {
                if (ab_volume % b != 0) continue;
                int c = ab_volume / b;
                if (c > z) continue;

                // Calculate the number of valid positions for placing the box of size a*b*c inside x*y*z
                int count_x = x - a + 1;
                int count_y = y - b + 1;
                int count_z = z - c + 1;
                int placements = count_x * count_y * count_z;
                max_placements = max(max_placements, placements);
            }
        }

        cout << max_placements << endl;
    }

    return 0;
}
