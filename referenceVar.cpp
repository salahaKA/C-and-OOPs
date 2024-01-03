#include <iostream>
using namespace std;
int main()
{
    int a=100;
    int &b=a;
    int &c=b;
    cout<<a<<b<<c<<endl;
    b=200;
    cout<<a<<b<<c<<endl;
    c=500;
    cout<<a<<b<<c<<endl;
    return 0;
}