#include <iostream>
using namespace std;

void PrintNumberForward(int n) {
    if(n == 0) {
        return;
    }
    PrintNumberForward(n - 1);
    cout << n << " ";

}
void PrintNumberBackward(int n) {
    if(n == 0) {
        return;
    }
    cout << n << " ";
    PrintNumberBackward(n - 1);
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;
    PrintNumberForward(n);
    cout << "\n";
    PrintNumberBackward(n);
    return 0;
}