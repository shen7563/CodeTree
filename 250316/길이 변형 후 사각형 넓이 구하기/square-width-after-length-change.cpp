#include <iostream>
#include <string>

using namespace std;

int main() {

    int width = 0;
    int height = 0;

    cin >> width >> height;
    width += 8;
    height *= 3;

    cout << width << "\n" << height << "\n" << width * height;

}