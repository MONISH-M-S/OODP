#include <iosteam>
using namespace std;
class Product {
private:
    string productname;
    string stock;
    double productid;
    double price;
public:
    void inputdetails();
    void displaydetails();
};
void Product::inputdetails() {
    cout << "Enter product name: ";
    cin >> productname;
    cout << "Enter stock quantity: ";
    cin >> stock;
    cout << "Enter product ID: ";
    cin >> productid;
    cout << "Enter product price: ";
    cin >> price;
}
void Product::displaydetails() {
    cout << "Product Name: " << productname << endl;
    cout << "Stock : " << stock << endl;
    cout << "Product ID: " << productid << endl;
    cout << "Price: " << price << endl;
}
int main () {
    Product p[7];
    for (int i = 0; i < 3; i++) {
        p[i].inputdetails();
    }
    for (int i = 0; i < 7; i++) {
        p[i].displaydetails();
    }
    return 0;
}