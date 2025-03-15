#include <iostream>
#include <string>

using namespace std;

int main() {
    
    int year = 0;
    int month = 0;
    int day = 0;

    cin >> month;
    cin.get();
    cin >> day;
    cin.get();
    cin >> year;

    cout << year << "." << month << "." << day;
}