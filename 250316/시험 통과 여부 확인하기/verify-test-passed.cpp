#include <iostream>
#include <string>

using namespace std;

int main()
{
    int score = 0;
    cin >> score;

    if (score >= 80) {
        cout << "pass";
    }
    else {
        cout << 80 - score << " more score";
    }
}