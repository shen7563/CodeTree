#include <iostream>
#include <string>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    string str[10];
    for(int i = 0; i < 10; i++) {
        cin >> str[i];
        if((i+1) % 2 == 1) {
        cout << str[i] << "\n";
        }
    }
    return 0;
}