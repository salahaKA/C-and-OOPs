#include <iostream>
using namespace std;
class base{
    public:
    base(){
        cout<<"Base class constructor\n";
    }
    virtual ~base(){
        cout<<"Base class distructor\n";
    }
};
class dir:public base{
    public:
    dir(){
        cout<<"Derived class constructor\n";
    }
    ~dir(){
        cout<<"Derived class distructor\n";
    }
};
int main()
{
    base *b=new dir;
    delete b; 
    return 0;
}