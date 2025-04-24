#include <iostream>
#include <string>
#include <climits>
#include <algorithm>
#include <functional>
using namespace std;


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    string s1, s2;
    bool isSameLength = true;
    bool isSame = true;
    cin >> s1 >> s2;
    if(s1.size() != s2.size()) {
        isSameLength = false;
    }
    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());
    if(s1 != s2) {
        isSame = false;
    }
    if(isSameLength && isSame) {
        cout << "Yes";
    }
    else {
        cout << "No";
    }
    return 0;
}