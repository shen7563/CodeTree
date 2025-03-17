#include <iostream>
using namespace std;

int main()
{
    int count_3 = 0;
    int count_5 = 0;
    for(int i = 0; i < 10; i++) {
        int n = 0;
        cin >> n;
        if(n % 3 == 0){
            count_3++;
        }
        if(n % 5 == 0){
            count_5++;
        }
    }
    cout << count_3 << " " << count_5;
    return 0;
}