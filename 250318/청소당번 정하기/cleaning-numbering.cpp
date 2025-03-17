#include <iostream>
using namespace std;

int main()
{
    int count_2 = 0;
    int count_3 = 0;
    int count_12 = 0;
    int n = 0;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        if (i % 12 == 0)
        {
            count_12++;
        }
        else if (i % 3 == 0)
        {
            count_3++;
        }
        else if (i % 2 == 0)
        {
            count_2++;
        }
    }
    cout << count_2 << " " << count_3 << " " << count_12 << endl;
    return 0;
}