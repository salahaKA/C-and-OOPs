#include <iostream>
using namespace std;
class Stud
{
    int id;
    char name[20];
    public:
    void get()
    {
        cout<<"Enter student id and name:";cin>>id>>name;
    }
    void put()
    {
        cout<<"id="<<id<<"\n"<<"name="<<name<<endl;
    }
};
class phy:public Stud
{
    float mark,height;
    public:
    void getPhy()
    {
        cout<<"Enter student mark and height:"; cin>>mark>>height;
    }
    void putphy()
    {
        cout<<"mark="<<mark<<endl<<"height="<<height<<endl;
    }
};
int main()
{
    phy p;
    p.get();
    p.getPhy();
    p.put();
    p.putphy();
    return 0;
}