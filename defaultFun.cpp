#include <iostream>
using namespace std;
int sum(int a=3,int b=2,int c=1);
int main()
{
    cout<<"Sum is:"<<sum(10,20,30)<<endl;
    cout<<"Sum is:"<<sum(10,20)<<endl;
    cout<<"Sum is:"<<sum(10)<<endl;
    cout<<"Sum is:"<<sum()<<endl;
    return 0;

}
int sum(int a,int b,int c)
{
    return a+b+c;
}
