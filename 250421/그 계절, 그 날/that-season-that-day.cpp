#include <iostream>
using namespace std;

bool IsLeapYear(int year) {
    if(year % 4 != 0) {
        return false;
    }
    if(year % 100 != 0) {
        return true;
    }
    if(year % 400 == 0) {
        return true;
    }
    return false;
}

bool IsExistDay(int year, int month, int day) {
    if(month == 2) {
        if(IsLeapYear(year)) {
            if(day > 29) {
                return false;
            }
        } else {
            if(day > 28) {
                return false;
            }
        }
    }
    else if(month == 4 || month == 6 || month == 9 || month == 11) {
        if(day > 30) {
            return false;
        }
    } else if(month < 1 || month > 12) {
        return false;
    } else if(day < 1 || day > 31) {
        return false;
    }
    return true;
}

void IsWeather(int year, int month, int day) {
    if(IsExistDay(year, month, day)) {
        if(month == 12 || month == 1 || month == 2) {
            cout << "Winter";
        } else if(month >= 3 && month <= 5) {
            cout << "Spring";
        } else if(month >= 6 && month <= 8) {
            cout << "Summer";
        } else {
            cout << "Fall";
        }
    } 
    else {
        cout << -1;
    }
}
int main() {
    int year, month, day;
    cin >> year >> month >> day;
    IsWeather(year, month, day);
    return 0;
}