#include <iostream>
using namespace std;
class base
{
    public:
    base() //default constructor
    {
        cout<<"Base class constructor\n";
    }
};
class der:public base
{
    public:
    der() //default constructor
    {
        cout<<"Derived class constructor\n";
    }
};
int main()
{
    der d; //when object created, automatically it's constructors are executed
    return 0;
}