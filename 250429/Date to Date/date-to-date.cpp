#include <iostream>
using namespace std;

int Days(int month, int day) {
    int days[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int total_days = 0;

    for(int i = 1; i < month; i++) {
        total_days += days[i];
    }
    total_days += day;

    return total_days;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    int m1, d1, m2, d2;
    cin >> m1 >> d1 >> m2 >> d2;

    cout << Days(m2, d2) - Days(m1, d1) + 1;
    return 0;
}