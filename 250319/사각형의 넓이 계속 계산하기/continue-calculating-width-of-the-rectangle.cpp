#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    while (true)
    {
        int garo = 0, sero = 0;
        char c = ' ';
        cin >> garo >> sero >> c;
        cout << garo * sero << "\n";
        if (c == 'C')
        {
            break;
        }
    }
    return 0;
}