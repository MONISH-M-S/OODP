#include <iostream>
using namespace std;
class Animal {
public:
      void eat() {
            cout << "Animal is eating." << endl;
      } 
};
class Dog : public Animal {
public:
      void bark() {
            cout << "Dog is barking." << endl;
      }
};
class Bulldog : public Dog {
public:
void guard() {
            cout << "Bulldog is guarding." << endl;
      }
};
int main() {
      Bulldog myBulldog;
      myBulldog.eat(); 
      myBulldog.bark(); 
      myBulldog.guard(); 
      return 0;
}