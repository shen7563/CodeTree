#include <iostream>
#include <string>
#include <algorithm>
using namespace std;


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);


    int n;
    int arr1[100];
    int arr2[100];
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> arr1[i];
    }
    for(int i = 0; i < n; i++) {
        cin >> arr2[i];
    }
    sort(arr1, arr1 + n);
    sort(arr2, arr2 + n);
    for(int i = 0; i < n; i++) {
        if(arr1[i] != arr2[i]) {
            cout << "No";
            return 0;
        }
    }
    cout << "Yes";
    return 0;
}