#include <iostream>
#include <climits>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n = 0;
    int arr[1000] = {0};
    int minPrice = INT_MAX;
    int maxProfit = 0;
    
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
        if(arr[i] < minPrice) {
            minPrice = arr[i];
        }
        int profit = arr[i] - minPrice;
        if(profit > maxProfit) {
            maxProfit = profit;
        }
    }
    cout << maxProfit;
    return 0;
}