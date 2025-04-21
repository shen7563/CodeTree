#include <iostream>
using namespace std;

int Sum(int n) {
    if(n == 1) {
        return 1;
    }
    return n + Sum(n - 1);
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;
    cout << Sum(n);
    return 0;
}