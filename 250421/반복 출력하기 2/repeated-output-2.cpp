#include <iostream>
using namespace std;

void PrintHelloWorld(int n) {
    if(n == 0) {
        return;
    }
    cout << "HelloWorld\n";
    PrintHelloWorld(n - 1);
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;
    PrintHelloWorld(n);
    return 0;
}