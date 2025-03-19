#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int a = 0, b = 0, sum = 0;
    cin >> a >> b;;
    for(int i = a; i <= b; i++) {
        if(i % 6 == 0 && i % 8 != 0) {
            sum += i;
        }
    }
    cout << sum;
    return 0;
}