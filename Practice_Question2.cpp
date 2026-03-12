#include <iostream>
using namespace std;
class student
{
    public:
    int rollno;
    string name;
};
class Result : public student
{
    public:
    int science,maths,english;
    void display()
    {
        cout<<"Roll No: "<<rollno<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<"Science: "<<science<<endl;
        cout<<"Maths: "<<maths<<endl;
        cout<<"English: "<<english<<endl;
    }
};
int main()
{
    Result r1;
    r1.rollno=1;
    r1.name="monish";
    r1.science=99;
    r1.maths=100;
    r1.english=95;
    r1.display();
    Result r2;
    r2.rollno=2;    
    r2.name="dinesh";
    r2.science=55;
    r2.maths=7;
    r2.english=65;
    r2.display();
    return 0;
}
