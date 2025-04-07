#include <iostream>
#include <string>
#include <climits>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    string str1, str2, str3;
    cin >> str1 >> str2 >> str3;
    int length1 = str1.length();
    int length2 = str2.length();
    int length3 = str3.length();
    int max = INT_MIN;
    int min = INT_MAX;
    if(length1 > max)
        max = length1;
    if(length2 > max)
        max = length2;
    if(length3 > max)
        max = length3;
    if(length1 < min)
        min = length1;  
    if(length2 < min)
        min = length2;
    if(length3 < min)
        min = length3;

    cout << max - min;
    return 0;
}