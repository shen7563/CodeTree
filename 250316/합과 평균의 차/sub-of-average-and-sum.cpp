#include <iostream>
#include <string>

using namespace std;

int main() {

    int a = 0;
    int b = 0;
    int c = 0;
    cin >> a >> b >> c;

    int sum = a + b + c;

    cout << sum << "\n" << sum/3 << "\n" << sum - (sum/3);
}