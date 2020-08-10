#include <iostream>
using namespace std;

class CA 
{
  public:
  int ca_var;
  int add(int a, int b);
  int add(int a);
};

//那么在实现这个函数时，必须这样写：
int CA::add(int a, int b)
{
  return a + b;
}

//另外，双冒号也常常用于在类变量内部作为当前类实例的元素进行表示，比如：
int CA::add(int a)
{
  return a + CA::ca_var; 
}
//表示当前类实例中的变量ca_var。


int main()
{   
    CA a;
    a.ca_var = 10;
    cout << a.add(5) <<endl;
    cout << a.add(3, 4) <<endl;
}
