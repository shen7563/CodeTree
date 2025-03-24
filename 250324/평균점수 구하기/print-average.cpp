#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    double score[8] = {0};
    double sum = 0;
    double avg = 0;
    for(int i = 0; i < 8; i++) {
        cin >> score[i];
        sum += score[i];
    }
    avg = sum / 8;
    cout << fixed;
    cout.precision(1);
    cout << avg;
    return 0;
}