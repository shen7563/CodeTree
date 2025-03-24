#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int a = 0, b = 0, sum = 0;
    int mod[11] = {0 ,};
    cin >> a >> b;
    while(a >= 2) {
        mod[a % b]++;
        a /= b;
    }
    for(int i = 0; i < 11; i++) {
        sum += mod[i] * mod[i];
    }
    cout << sum;
    return 0;
}