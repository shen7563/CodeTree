#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    string s;
    int n;
    int count = 0;
    cin >> s;
    cin >> n;
    for(int i = s.length() - 1; i >= 0; i--) {
        if(count >= n) {
            break;
        }
        cout << s[i];
        count++;
    }
    return 0;
}