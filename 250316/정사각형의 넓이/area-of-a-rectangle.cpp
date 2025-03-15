#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n = 0;
    cin >> n;
    int area = n * n;

    cout << area;
    if(n < 5) {
        cout << "\ntiny";
    }
}