#include <iostream>

#define MAX_N 100

using namespace std;

int student[MAX_N];

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, m, k;
    int penalty_student = 0;
    bool isPenalty = false;
    cin >> n >> m >> k;
    for(int i = 0; i < m; i++) {
        int penalty;
        cin >> penalty;
        student[penalty]++;
        if(student[penalty] >= k) {
            isPenalty = true;
            penalty_student = penalty;
            break;
        }
    }
    if(isPenalty) {
        cout << penalty_student << "\n";
    } else {
        cout << -1;
    }
    return 0;
}