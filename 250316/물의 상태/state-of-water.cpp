#include <iostream>
using namespace std;

int main() {

    int temperture = 0;
    cin >> temperture;

    if(temperture >= 100) {
        cout << "vapor";
    }
    else if (temperture >= 0) {
        cout << "water";
    }
    else {
        cout << "ice";
    }
    return 0;
}