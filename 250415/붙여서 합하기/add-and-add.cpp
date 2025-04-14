#include <iostream>
#include <string>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    string a, b;
    cin >> a >> b;

    int numA = stoi(a + b);
    int numB = stoi(b + a);
    cout << (numA + numB);
    return 0;
}