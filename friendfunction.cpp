#include <iostream>
using namespace std;
class Rectangle;
class Square 
{
private:
    int side;
public:
    Square(int s) : side(s) {}
    friend void compareArea(const Square& sq, const Rectangle& rect);
};
class Rectangle 
{
private:
    int length;
    int width;
public:
    Rectangle(int l, int w) : length(l), width(w) {}
	friend void compareArea(const Square& sq, const Rectangle& rect);
};

void compareArea(const Square& sq, const Rectangle& rect) 
{
    int areaSq = sq.side * sq.side;
    int areaRect = rect.length * rect.width;
    
	if (areaSq > areaRect) 
	{
        cout << "Area of square is greater than area of rectangle\n";
    } 
    else if (areaSq < areaRect) 
	{
        cout << "Area of rectangle is greater than area of square\n";
    } 
    else {
        cout << "Area of square is equal to area of rectangle\n";
    }
}
int main() {
    Square square(5);
    Rectangle rectangle(4, 6);
    compareArea(square, rectangle);
    return 0;
}