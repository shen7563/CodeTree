#include <iostream>
#include <string>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;

    string s, t;
    cin >> s;

    int count = 0;

    for(int i = 0; i < n; i++) {
        cin >> t;
        if(s == t) {
            count++;
        }
    }
    cout << count;
    return 0;
}