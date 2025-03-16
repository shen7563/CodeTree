#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int a_age, b_age = 0;
    char a_gender, b_gender = ' ';

    cin >> a_age >> a_gender >> b_age >> b_gender;

        if((a_age >= 19 && a_gender == 'M') || (b_age >= 19 && b_gender == 'M')) {
            cout << 1;
        }
        else {
            cout << 0;
        }
    return 0;
}