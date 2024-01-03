#include <iostream>
using namespace std;
template <class t1, class t2>
float sum(t1 a,t2 b)
{
    return a+b;
}
int main()
{
    cout<<"sum="<<sum(6,4)<<endl;
    cout<<"sum="<<sum(3.5,4.2)<<endl;
    cout<<"sum="<<sum(3,4.2)<<endl;
    cout<<"sum="<<sum(1.1,2)<<endl;
    return 0;
}