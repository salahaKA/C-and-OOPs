#include <iostream>
using namespace std;
class Test1  //container class
{
    int a,b;
    public:
    friend class Test2;
    void get()
    {
        cout<<"Enter a,b:"<<endl;
        cin>>a>>b;
    }
};
class Test2 //contained class
{
    public:
    void put(Test1 t1)
    {
        cout<<t1.a<<"\t"<<t1.b<<endl;
    }
};
int main()
{
    Test1 t1;
    Test2 t2;
    t1.get();
    t2.put(t1);
    return 0;
}