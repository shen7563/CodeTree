#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n = 0;
    cin >> n;
    double avg = 0, sum = 0;
    double score[5] = {0};
    for(int i = 0; i < n; i++) {
        cin >> score[i];
        sum += score[i];
    }
    avg = (double)sum / n;
    cout << fixed;
    cout.precision(1);
    cout << avg << '\n';
    if(avg >= 4.0) {
        cout << "Perfect";
    }
    else if(avg >= 3.0) {
        cout << "Good";
    }
    else {
        cout << "Poor";
    }
    return 0;
}