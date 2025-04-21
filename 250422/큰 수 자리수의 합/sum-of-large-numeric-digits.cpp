#include <iostream>
using namespace std;

int Sum(int n) {
    if(n < 10) {
        return n;
    }
    return Sum(n / 10) + (n % 10);
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int a, b, c;
    cin >> a >> b >> c;
    int mul = a * b * c;
    cout << Sum(mul);
    return 0;
}