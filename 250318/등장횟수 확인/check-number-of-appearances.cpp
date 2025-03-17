#include <iostream>
using namespace std;

int main()
{
    int count = 0;
    for(int i = 0; i< 5; i++) {
        int n = 0;
        cin >> n;
        if(n % 2 == 0) {
            count++;
        }
    }
    cout << count;
    return 0;
}