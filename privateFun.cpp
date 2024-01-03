#include <iostream>
using namespace std;
class Emp
{
    
    int id;
    char name[20];
    float salary;
    void get()
    {
        cout<<"Enter id, name, salary"; cin>>id>>name>>salary;
    }
    public:
    void put()
    {
        get();
        cout<<id<<endl<<name<<endl<<salary;
    }
};
int main()
{
    Emp e;
    e.put();
    return 0;
}