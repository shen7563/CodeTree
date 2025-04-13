#include <iostream>
#include <string>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    string s;
    int eeCount = 0;
    int ebCount = 0;
    cin >> s;

    for(int i = 0; i < s.length() - 1; i++) {
        if(s.substr(i, 2) == "ee") {
            eeCount++;
        } else if(s.substr(i, 2) == "eb") {
            ebCount++;
        }
    }
    cout << eeCount << " " << ebCount;
    return 0;
}