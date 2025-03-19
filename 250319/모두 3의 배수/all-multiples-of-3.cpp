#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    bool flag = true;
    for(int i = 0; i < 5; i++) {
        int n = 0;
        cin >> n;
        if(n % 3 != 0) {
            flag = false;
            break;
        }
    }
    if(flag) {
        cout << "1";
    } else {
        cout << "0";
    }
    return 0;
}