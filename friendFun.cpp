#include <iostream>
using namespace std;
class sample
{
    public:
    int a,b;
    friend void print();
    
};
void print(sample s)
{
        s.a= 10;
        s.b=20;
        cout<<s.a<<"\t"<<s.b<<endl;
}
int main()
{
    sample s;
    print(s);
    return 0;
}