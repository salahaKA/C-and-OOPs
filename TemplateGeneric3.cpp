#include <iostream>
using namespace std;
template <class t>
t sum(t a[],int size)
{
    t sum=0;
    for(int i=0;i<size;i++)
    {
        sum+=a[i];
    }
    return sum;
}
int main()
{
    int x[5]={10,20,30,40,50};
    float y[3]={1.1,2.2,3.3};
    cout<<sum(x,5)<<endl;
    cout<<sum(y,3)<<endl;
    return 0;
}