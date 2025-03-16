#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    double left_eye, right_eye = 0;
    cin >> left_eye >> right_eye;

    if(left_eye >= 1.0 && right_eye >= 1.0)
    {
        cout << "High";
    }
    else if(left_eye >= 0.5 && right_eye >= 0.5)
    {
        cout << "Middle";
    }
    else
    {
        cout << "Low";
    }
    return 0;
}