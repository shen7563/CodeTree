#include <iostream>
using namespace std;

void PrintStars(int n) {
    if(n == 0) {
        return;
    }
    for(int i = 0; i < n; i++) {
        cout << "* ";
    }
    cout << "\n";
    PrintStars(n - 1);
    for(int i = n; i > 0; i--) {
        cout << "* ";
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
    PrintStars(n);
    return 0;
}