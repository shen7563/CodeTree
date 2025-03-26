#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n1 = 0, n2 = 0;
    int arr1[100] = {0 ,};
    int arr2[100] = {0 ,};
    
    cin >> n1 >> n2;
    for(int i = 0; i < n1; i++) {
        cin >> arr1[i];
    }
    for(int i = 0; i < n2; i++) {
        cin >> arr2[i];
    }
    int count = 0;
    for(int i = 0; i < n1; i++) {
        if(arr1[i] == arr2[count]) {
            count++;
        }
        else {
            count = 0;
        }
        if(count == n2) {
            cout << "Yes";
            break;
        }
    }
    if(count != n2) {
        cout << "No";
    }
    return 0;
}