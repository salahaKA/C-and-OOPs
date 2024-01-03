#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter array size:";cin>>n;
    int *p= new int[n];
    cout<<"Enter array elements:";
    for (int i = 0; i < n; i++)
    {
        cin>>p[i];
    }
    cout<<"Print array elements:"<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<p[i]<<ends;
    }
    delete p;
    return 0;
    
}