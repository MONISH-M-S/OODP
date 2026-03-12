#include <iostream>
using namespace std;
class Employee
{
    public:
    string name;
    int id;
    void display()
    {
        cout<<"Name: "<<name<<endl;
        cout<<"ID: "<<id<<endl;
    }
};
class Manager : public Employee
{
    public:
    string department;
    int salary;
    void display()
    { 
        Employee::display(); 
        cout<<"Department: "<<department<<endl;
        cout<<"Salary: "<<salary<<endl;
    }

};
int main()
{
    Manager m1;
    m1.name = "monish";
    m1.id = 1234;
    m1.department = "Sales";
    m1.salary = 50000;
    m1.display();
    Manager m2;
    m2.name = "manish";
    m2.id = 5678;
    m2.department = "accounting";
    m2.salary = 25000;
    m2.display();
    return 0;
}