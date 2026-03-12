#include <iostream>
using namespace std;
class Movement
{
    public:
    void move()
    {
        cout<<"Vehicle is moving\n";
    }
};
class Fuel{
    public:
    void refillfuel()
    {
        cout<<"Vehicle is refilling fuel\n";
    }
};
class Car : public Movement, public Fuel
{
    public:
    void honk()
    {
        cout<<"Car is honking\n";
    }
};
int main()
{
    Car myCar;
    myCar.move();
    myCar.refillfuel();
    myCar.honk();
    return 0;
}