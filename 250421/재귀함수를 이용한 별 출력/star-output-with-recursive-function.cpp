#include <iostream>
using namespace std;

void PrintStarts(int n) {
    if(n == 0) {
        return;
    }
    PrintStarts(n - 1);
    for(int i = 0; i < n; i++) {
        cout << "*";
    }
    cout << "\n";
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;
    PrintStarts(n);
    return 0;
}