#include <iostream>
using namespace std;
int main()
{
    int a=10,b=20;
    swap(a,b);
    cout<<"a="<<a<<"\t"<<"b="<<b;
    return 0;
}
void swap(int &a,int &b)
{
    int temp= a;
    a= b;
    b=temp;
}