#include <iostream>
using namespace std;
template <class t>
t sum(t a,t b)
{
    return a+b;
}
int main()
{
    cout<<"sum="<<sum(6,4)<<endl;
    cout<<"sum="<<sum(3.5,4.2)<<endl;
    return 0;
}