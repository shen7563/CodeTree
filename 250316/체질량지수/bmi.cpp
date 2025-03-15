#include <iostream>
#include <string>

using namespace std;

int main()
{
    int height = 0;
    int weight = 0;

    cin >> height >> weight;

    int bmi = (10000 * weight) / (height * height);

    cout << bmi;

    if(bmi >= 25) {
        cout << "\nObesity";
    }
}