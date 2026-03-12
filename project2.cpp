#include <iostream>
using namespace std;
void count ()
{ 
    static int c=0;
    c++;
    cout << c << "";

}
int main()
{ count();
  count();
  count();
}