#include <iostream>
using namespace std;

int main()
{
    int count = 0;
    for(int i = 0; i < 10; i++) {
        int n = 0;
        cin >> n;
        if (n % 2 == 1) {
            count++;
        }
    }
    cout << count;
    return 0;
}