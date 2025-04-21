#include <iostream>
using namespace std;

int Num(int n) {
    if(n == 1) {
        return 0;
    }
    if(n % 2 == 0) {
        return Num(n / 2) + 1;
    }
    else {
        return Num(n / 3) + 1;
    }
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