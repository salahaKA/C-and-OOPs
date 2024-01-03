#include <iostream>
using namespace std;
class Stud
{
    int id;
    char name[20];
    public:
        void read()
        {
            cout<<"Enter student Id and name:"; cin>>id>>name;
        }
        void display();
};
void Stud::display()
{
    cout<<"Student id="<<id<<endl;
    cout<<"Student name="<<name<<endl;
}
int main()
{
    Stud s1;
    s1.read();
    s1.display();
    return 0;
}