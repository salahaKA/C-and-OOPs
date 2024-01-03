#include <iostream>
using namespace std;
float SI(float p,float t,float r=3)
{
    return (p*t*r)/100;
}
int main()
{
    cout<<"Simple interest (SI)="<<SI(1000,10,2)<<endl;
    cout<<"Simple interest (SI)="<<SI(1000,10);
    // cout<<"Simple interest (SI)="<<SI(1000);
    return 0;
}