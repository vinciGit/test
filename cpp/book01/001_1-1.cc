#include <iostream>
using namespace std;

int func(int n)
{
    //return n << 1 + 1;
    return (n << 1) + 1;
}

int main()
{
    cout << "result = " << func(5) << endl;

    return 0;
}
