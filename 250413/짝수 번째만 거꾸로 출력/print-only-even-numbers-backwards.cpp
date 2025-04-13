#include <iostream>
#include <string>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    string s;
    cin >> s;
    int idx = s.length() - 1;
    if(idx % 2 == 0) {
        idx--;
    }
    for(int i = idx; i >= 0; i -= 2) {
        cout << s[i];
    }

    return 0;
}