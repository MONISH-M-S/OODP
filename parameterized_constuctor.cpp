#include <iostream>
using namespace std;    
class Student {
private:
int id;
public:
Student(int x) {
id = x;
}   
void display() {
cout << "ID: " << id << endl;
}
};  
int main() {
Student s1(100);    
s1.display();
Student s2(101);
s2.display();
return 0;
}