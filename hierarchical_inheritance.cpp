#include <iostream>
using namespace std;
class Shape {
public:
void draw() {
cout << "Drawing a shape." << endl;
}
};      
class Circle : public Shape {
public:
void drawCircle() {
cout << "Drawing a circle." << endl;
}
};
class rectangle : public Shape {
public:
void drawRectangle() {
cout << "Drawing a rectangle." << endl;
}
};  
int main() {
Circle c1;
rectangle r1;        
c1.draw();
c1.drawCircle();
r1.draw();
r1.drawRectangle();
return 0;
}   