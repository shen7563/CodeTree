#include <iostream>
using namespace std;

void PrintNumber(int n) {
    if(n == 0) {
        return;
    }
    cout << n << " ";
    PrintNumber(n - 1);
    cout << n << " ";
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;
    PrintNumber(n);
    return 0;
}