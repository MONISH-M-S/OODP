#include <iostream>
using namespace std;
class Base
{public:
   Base()
   {cout<<"Base class constructor called\n";
   }
};
class Derived:public Base
{public:
   Derived()
   {cout<<"Derived class constructor called\n";
   }
};  
int main()
{Derived d;
return 0;
}