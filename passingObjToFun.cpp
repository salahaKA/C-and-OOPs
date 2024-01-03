#include <iostream>
using namespace std;
class Sample
{
    int a;
    public:
    void get()
    {
        cout<<"Enter a value:"; cin>>a;
    }
    void put()
    {
        cout<<"Value is:"<<a<<endl;
    }
    void big(Sample s2)
    {
        if (a>s2.a)
        {
            cout<<"s1 is largest"<<endl;
        }else if(a<s2.a){
            cout<<"s2 is largest"<<endl;
        }else{
            cout<<"Both are same"<<endl;
        }
    }
};

int main()
{
    Sample s1,s2;
    s1.get();
    s2.get();
    s1.put();
    s2.put();
    s1.big(s2);
    return 0;
}