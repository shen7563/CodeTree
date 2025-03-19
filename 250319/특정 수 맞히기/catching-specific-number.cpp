#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    while(true) {
        int n = 0;
        cin >> n;
        if(n > 25) {
            cout << "Lower\n";
        }
        else if (n < 25) {
            cout << "Higher\n";
        }
        else {
            cout << "Good\n";
            break;
        }
    }
    return 0;
}