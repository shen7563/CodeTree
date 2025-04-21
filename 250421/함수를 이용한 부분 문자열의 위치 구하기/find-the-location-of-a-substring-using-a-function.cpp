#include <iostream>
#include <string>
using namespace std;

string n, m;

bool IsSubstr(int index) {
    if(index + m.length() - 1 >= n.length()) {
        return false;
    }
    for(int i = 0; i < m.length(); i++) {
        if(n[index + i] != m[i]) {
            return false;
        }
    }
    return true;
}

int Find() {
    for(int i = 0; i < n.length(); i++) {
        if(IsSubstr(i)) {
            return i;
        }
    }
    return -1;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n >> m;

    cout << Find();
    return 0;
}