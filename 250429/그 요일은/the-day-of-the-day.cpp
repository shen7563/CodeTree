#include <iostream>
using namespace std;

int Days(int month, int day) {
    int days[13] = {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int total_days = 0;
    for (int i = 1; i < month; i++) {
        total_days += days[i];
    }
    total_days += day;

    return total_days;
}

int Weekday(string s) {
    if(s == "Mon") return 0;
    else if (s == "Tue") return 1;
    else if(s == "Wed") return 2;
    else if(s == "Thu") return 3;
    else if(s == "Fri") return 4;
    else if(s == "Sat") return 5;
    else if(s == "Sun") return 6;
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    int m1, d1, m2, d2;
    string A;
    int ans = 0;
    cin >> m1 >> d1 >> m2 >> d2 >> A;
    int start = Days(m1, d1);
    int end = Days(m2, d2);
    int current = Weekday("Mon");

    for(int i = start; i <= end; i++) {
        if(current == Weekday(A)) {
            ans++;
        }
        current = (current + 1) % 7;
    }

    cout << ans;
    return 0;
}