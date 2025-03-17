#include <iostream>
using namespace std;

int main()
{
    int score = 0;
    cin >> score;

    for(int i = score; i <= 100; i++) {
        if(i >= 90) {
            cout << "A ";
        }
        else if (i >= 80) {
            cout << "B ";
        }
        else if (i >= 70) {
            cout << "C ";
        }
        else if (i >= 60) {
            cout << "D ";
        }
        else {
            cout << "F ";
        }
    }
    return 0;
}