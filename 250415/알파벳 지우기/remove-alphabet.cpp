#include <iostream>
#include <string>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    string a, b, new_a, new_b;
    cin >> a >> b;

    int index1 = 0;
    int index2 = 0;

    for(int i = 0; i < a.length(); i++) {
        if(a[i] >= '0' && a[i] <= '9') {
            new_a += a[i];
        }
    }
    for(int i = 0; i < b.length(); i++) {
        if(b[i] >= '0' && b[i] <= '9') {
            new_b += b[i];
        }
    }

    int num1 = stoi(new_a);
    int num2 = stoi(new_b);
    cout << num1 + num2;
    return 0;
}