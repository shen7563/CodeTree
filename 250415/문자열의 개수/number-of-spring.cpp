#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    string s[201];
    int count = 0;
    while(true) {
        cin >> s[count];
        if(s[count] == "0") {
            break;
        }
        count++;
    }
    cout << count << "\n";
    for(int i = 0; i < count; i += 2) {
        cout << s[i] << "\n";
    }
    return 0;
}