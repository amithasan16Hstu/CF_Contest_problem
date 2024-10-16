#include <bits/stdc++.h>

using namespace std;


string convertTo12Hour(string time24) {
    int hour, minute;
    char colon;
    stringstream ss(time24);
    ss >> hour >> colon >> minute;

    string period = (hour < 12) ? "AM" : "PM";

    if (hour == 0) {
        hour = 12;
    } else if (hour > 12) {
        hour -= 12;
    }

    
    stringstream result;
    result << setw(2) << setfill('0') << hour << ":" << setw(2) << setfill('0') << minute << " " << period;

    return result.str();
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        string time24;
        cin >> time24;
        cout << convertTo12Hour(time24) << endl;
    }

    return 0;
}
