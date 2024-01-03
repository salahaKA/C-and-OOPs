#include <iostream>
using namespace std;
class base{
    public:
    ~base()
    {
        cout<<"base class distructor\n";
    }
};
class der:public base
{
    public:
    ~der()
    {
        cout<<"Derived class distructor\n";
    }
};
int main()
{
    der d;
    return 0;
}