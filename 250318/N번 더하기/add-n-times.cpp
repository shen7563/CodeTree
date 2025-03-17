#include <iostream>
using namespace std;

int main()
{
    int a, n = 0;
    cin >> a >> n;

    int sum = a + n;
    for(int i =0;i<n;i++) {
        cout << sum << "\n";
        sum += n;

    }
    return 0;
}