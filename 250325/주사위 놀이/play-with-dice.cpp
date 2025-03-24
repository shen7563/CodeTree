#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int dice[10] = {0, };
    int diceCount[7] = {0, };
    for(int i = 0; i < 10; i++) {
        cin >> dice[i];
        diceCount[dice[i]]++;
    }
    for(int i = 1; i < 7; i++) {
        cout << i << " - " << diceCount[i] << "\n";
    }
    return 0;
}