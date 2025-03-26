#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int count = 0;
    char c[6] = {'L', 'E', 'B', 'R', 'O', 'S'};
    char letter = ' ';
    cin >> letter;
    for(int i = 0; i < 6; i++) {
        if(c[i] == letter) {
            cout << i;
            break;
        }
        count++;
    }
    if(count == 6) {
        cout << "None";
    }
    return 0;
}