#include <iostream>
using namespace std;

int PowerSum(int n) {
    if(n < 10) {
        return n * n;
    }
    int digit = n % 10;
    return PowerSum(n / 10) + digit * digit;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;
    cout << PowerSum(n);
    return 0;
}