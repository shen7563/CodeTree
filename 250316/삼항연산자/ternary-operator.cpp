#include <iostream>
#include <string>

using namespace std;

int main()
{
    int score = 0;
    cin >> score;

    string grade = score == 100 ? "pass" : "failure";

    cout << grade;
}