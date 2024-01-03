#include <iostream>
using namespace std;
class Test
{
    int a,b;
    public:
    void get()
    {
        cout<<"Enter 2 value:"; cin>>a>>b;
    }
    void put()
    {
        cout<<"a="<<a<<endl<<"b="<<b<<endl;
    }
    Test sum(Test t2)
    {
        Test t3;
        t3.a= a+t2.a;
        t3.b= b+t2.b;
        return t3;
    }
};

int main()
{
    Test t1,t2,t3;
    t1.get();
    t2.get();
    t1.put();
    t2.put();
    t3= t1.sum(t2);
    t3.put();
    return 0;
}