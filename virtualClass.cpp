#include <iostream>
using namespace std;
class c1
{
    public:
    void c1fun()
    {
        cout<<"C1 class function\n";
    }
};
class c2: public virtual c1
{
    public:
    void c2fun()
    {
        cout<<"C2 class function\n";
    }
};
class c3: public virtual c1
{
    public:
    void c3fun()
    {
        cout<<"C3 class function\n";
    }
};
class c4:public c2, public c3
{
    public:
    void c4fun()
    {
        cout<<"C4 class function\n";
    }
};
int main()
{
    c4 obj;
    obj.c1fun();
    obj.c2fun();
    obj.c3fun();
    obj.c4fun();
    return 0;
}