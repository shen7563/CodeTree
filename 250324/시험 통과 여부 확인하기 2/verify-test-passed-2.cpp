#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int score[4] = {0,};
    int sum = 0, count = 0;
    double avg = 0;
    int n = 0;
    cin >> n;
    for(int i = 0; i < n; i++) {
        sum = 0;
        avg = 0;
        for(int j = 0; j < 4; j++) {
            cin >> score[j];
            sum += score[j];
        }
        avg = sum / 4.0;
        if(avg >= 60) {
            cout << "pass\n";
            count++;
        }
        else {
            cout << "fail\n";
        }
    }
    cout << count;
    return 0;
}