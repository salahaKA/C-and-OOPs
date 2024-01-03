#include <iostream>
using namespace std;
class Student
{
    int id;
    char name[20];
    public:
        void get()
        {
            cout<<"Enter id and name"<<endl;
            cin>>id>>name;
        }
        void put();
};
void Student::put()
{
    cout<<"Id="<<id<<endl;
    cout<<"Name is:"<<name<<endl;
}
int main(){
    Student s;
    s.get();
    s.put();
    return 0;
}