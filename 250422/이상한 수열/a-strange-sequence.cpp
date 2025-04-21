#include <iostream>
using namespace std;

int Sequence(int n) {
    if(n == 1) {
        return 1;
    }
    if(n == 2) {
        return 2;
    }
    return Sequence(n / 3) + Sequence(n - 1);
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;
    cout << Sequence(n);
    return 0;
}