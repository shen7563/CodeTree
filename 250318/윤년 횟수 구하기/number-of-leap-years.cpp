#include <iostream>
using namespace std;

int main()
{
    int year = 0;
    int count = 0;

    cin >> year;
    for(int i =1;i<=year;i++) {
        if(i%4 ==0) {
            if(i % 100 != 0 || i % 400 == 0) {
                count++;
            }
        }
    }
    cout << count << endl;
    return 0;
}