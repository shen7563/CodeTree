#include <iostream>
#include <string>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    string a, b;
    cin >> a >> b;
    if(a + b == b + a) {
        cout << "true";
    }
    else {
        cout << "false";
    }
}