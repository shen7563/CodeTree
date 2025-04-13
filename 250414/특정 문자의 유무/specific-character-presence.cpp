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
    if(s.find("ee") == string::npos) {
        cout <<"No ";
    }
    else {
        cout << "Yes ";
    }
    if(s.find("ab") == string::npos) {
        cout << "No ";
    }
    else {
        cout << "Yes ";
    }
}