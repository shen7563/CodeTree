#include <iostream>
#include <string>

using namespace std;

int main() {

    int front = 0;
    int middle = 0;
    int back = 0;

    cin >> front;
    cin.get();
    cin >> middle;
    cin.get();
    cin >> back;

    cout << "010-" << back << "-" << middle;

}