#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int a_math, a_eng, b_math, b_eng = 0;
    cin >> a_math >> a_eng >> b_math >> b_eng;

    if(a_math > b_math && a_eng > b_eng)
    {
        cout << 1;
    }
    else 
    {
        cout << 0;
    }
    return 0;
}