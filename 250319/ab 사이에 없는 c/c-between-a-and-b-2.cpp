#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int a = 0, b = 0, c = 0;
    bool flag = true;
    cin >> a >> b >> c;
    for(int i = a; i <= b; i++) {
        if(i % c == 0) {
            flag = false;
            break;
        }
    }
    if(flag) {
        cout << "YES";
    }
    else {
        cout << "NO";
    }
    return 0;
}