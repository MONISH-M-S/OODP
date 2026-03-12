#include <iostream>
using namespace std;
class Rectangle {   
private:
    int length;
    int breadth;
public:
    Rectangle(int l, int b) {
        length = l;
        breadth = b;
    }
    void area() {
        cout << "Area of Rectangle: " << length * breadth << endl;
    }   
};
int main() {
    Rectangle r1(5, 3);
    r1.area();
    Rectangle r2(10, 4);
    r2.area();
    return 0;
}   