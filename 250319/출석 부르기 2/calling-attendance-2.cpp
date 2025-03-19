#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    while (true)
    {
        int n = 0;
        cin >> n;
        if (n == 1)
        {
            cout << "John\n";
        }
        else if (n == 2)
        {
            cout << "Tom\n";
        }
        else if (n == 3)
        {
            cout << "Paul\n";
        }
        else if (n == 4)
        {
            cout << "Sam\n";
        }
        else
        {
            cout << "Vacancy\n";
            break;
        }
    }
    return 0;
}