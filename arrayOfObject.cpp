#include <iostream>
using namespace std;
class Stud
{
    int id;
    char name[20];
    public:
    void get();
    void put();
};
void Stud::get()
{
    cout<<"Enter student  id and name:"<<endl;
    cin>>id>>name;
}
void Stud::put()
{
    cout<<id<<"\t"<<name<<endl;
}
int main()
{
    Stud s[30];
    int n,i;
    cout<<"Enter number student in between [1-30]"<<endl;
    cin>>n;
    if (n<1 || n>30)
    {
        cout<<"Plz value between [1-60]"<<endl;
    }
    
    for(int i=0;i<n;i++)
    {
        s[i].get();
    }
    cout<<"Id"<<"\t"<<"Name"<<endl;
    for(int i=0;i<n;i++)
    {
        s[i].put();
    }
    return 0;
    
}