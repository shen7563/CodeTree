#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    int day, hour, minute;
    cin >> day >> hour >> minute;

    int total_minutes = ((day * 24 * 60) + (hour * 60) + minute) - (11 * 24 * 60 + 11 * 60 + 11);
    if(total_minutes < 0) {
        cout << -1;
    }
    else {
        cout << total_minutes;
    }
    return 0;
}