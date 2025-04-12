#include <iostream>
#include <string>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    string str;
    getline(cin, str);
    for(int i = 2; i < 10; i++) {
        cout << str[i];
    }
    return 0;
}