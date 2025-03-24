#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int score[100] = {0, };
    int scoreCount[11] = {0, };
    for(int i = 0; i < 100; i++)
    {
        cin >> score[i];
        if(score[i] == 0) {
            break;
        }
        scoreCount[score[i] / 10]++;
    }
    for(int i = 10; i >= 1; i--) {
        cout << i * 10 << " - " << scoreCount[i] << "\n";
    }
    return 0;
}