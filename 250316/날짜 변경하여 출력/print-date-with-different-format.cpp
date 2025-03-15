#include <iostream>
#include <string>

using namespace std;

int main() {
    
    int year = 0;
    int month = 0;
    int day = 0;

    cin >> year;
    cin.get();
    cin >> month;
    cin.get();
    cin >> day;

    cout << month << "-" << day << "-" << year;
}