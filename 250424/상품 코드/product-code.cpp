#include <iostream>
#include <string>
using namespace std;

class Product {
    public:
        string id;
        int code;
        Product(string id, int code) {
            this->id = id;
            this->code = code;
        }
};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    Product product1 = Product("codetree", 50);
    string id;
    int code;
    cin >> id >> code;

    Product product2 = Product(id, code);
    cout << "product " << product1.code << " is " << product1.id << "\n";
    cout << "product " << product2.code << " is " << product2.id << "\n";
    return 0;
}