#include <iostream>
using namespace std;
class Test
{
    int a;
    public:
    void get()
    {
        cin>>a;
    }
    void operator ==(Test t2)
    {
        if (a==t2.a)
        {
            cout<<"object are equal\n";
        }else{
            cout<<"object are not equal\n";
        }
        
    }
};
int main()
{
    Test t1,t2;
    cout<<"Enter a value for first object:";
    t1.get();
    cout<<"\nEnter a value for second object:";
    t2.get();
    t1==t2;
    return 0;
}