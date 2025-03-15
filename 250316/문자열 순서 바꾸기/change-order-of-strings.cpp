#include <iostream>
#include <string>

using namespace std;

int main() {
    
    string s, t;

    cin >> s >> t;

    string temp = s;
    s = t;
    t = temp;

    cout << s << "\n" << t;

    return 0;
}