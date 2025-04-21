#include <iostream>
using namespace std;

int Collatz(int n) {
    if(n == 1) {
        return 0;
    }
    if(n % 2 == 0) {
        return 1 + Collatz(n / 2);
    } else {
        return 1 + Collatz(3 * n + 1);
    }
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;
    cout << Collatz(n);
    return 0;
}