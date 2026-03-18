#include <iostream>
using namespace std;
class Student {
protected:
    string name;
    int roll_number;
};
class Sports 
{protected:
    int sports_score;
};
class result : public Student, public Sports
{public:
    void getdata()
    {
       name = "leo";
       roll_number = 37;
       sports_score = 95;
    }
    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Roll Number: " << roll_number << endl;
        cout << "Sports Score: " << sports_score << endl;
    }
};
int main() {
    result r1;
    r1.getdata();
    r1.display();
    return 0;
}
