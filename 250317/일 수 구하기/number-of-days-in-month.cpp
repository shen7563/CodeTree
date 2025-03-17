#include <iostream>
using namespace std;

int main()
{
    int month = 0;
    cin >> month;

    if(month == 2) {
        cout << 28;
    }
    else if(month <= 7) {
        if(month % 2 == 1) {
            cout << 31;
        }
        else {
            cout << 30;
        }
    }
    else {
        if(month % 2 == 0) {
            cout << 31;
        }
        else {
            cout << 30;
        }
    }
    return 0;
}