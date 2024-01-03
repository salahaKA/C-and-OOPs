#include <iostream>
using namespace std;
class sample
{
    static int a,b;
    public:
    static void get()
    {
        cout<<"Enter 2 value:"<<endl;
        cin>>a>>b;
        cout<<a<<"\t"<<b<<endl;
    }
};
int sample::a;
int sample::b;
int main()
{
    sample s;
    s.get();
    sample::get();
    return 0;
}