#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int a = 0, b = 0;
    bool flag = false;
    cin >> a >> b;
    for(int i = a; i <= b; i++) {
        if(1920 % i == 0 && 2880 % i == 0) {
            flag = true;
            break;
        }
    }
    if (flag) {
        cout << 1;
    }
    else {
        cout << 0;
    }
    return 0;
}