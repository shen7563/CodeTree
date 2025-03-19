#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n = 0;
    bool composite = false;
    cin >> n;

    for(int i = 2; i < n; i++) {
        if(n % i == 0) {
            composite = true;
            break;
        }
    }
    if (composite) {
        cout << "C";
    } else {
        cout << "N";
    }
    return 0;
}