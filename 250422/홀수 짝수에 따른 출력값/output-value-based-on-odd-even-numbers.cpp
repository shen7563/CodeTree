#include <iostream>
using namespace std;

int Num(int n) {
    if(n == 1) {
        return 1;
    }
    if(n == 2) {
        return 2;
    }
    return Num(n - 2) + n;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;
    cout << Num(n);
    return 0;
}