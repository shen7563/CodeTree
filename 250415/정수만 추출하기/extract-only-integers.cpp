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

    int index1 = 0;
    int index2 = 0;

    for(int i = 0; i < a.length(); i++) {
        if(a[i] >= '0' && a[i] <= '9') {
            index1++;
        }
        else {
            break;
        }
    }
    for(int i = 0; i < b.length(); i++) {
        if(b[i] >= '0' && b[i] <= '9') {
            index2++;
        }
        else {
            break;
        }
    }
    string s1 = a.substr(0, index1);
    string s2 = b.substr(0, index2);

    int num1 = stoi(s1);
    int num2 = stoi(s2);
    cout << num1 + num2;
    return 0;
}