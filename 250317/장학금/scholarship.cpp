#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int mid_score = 0;
    int final_score = 0;
    cin >> mid_score >> final_score;

    if (mid_score >= 90 && final_score >= 95)
    {
        cout << 100000;
    }
    else if (mid_score >= 90 && final_score >= 90)
    {
        cout << 50000;
    }
    else
    {
        cout << 0;
    }
}