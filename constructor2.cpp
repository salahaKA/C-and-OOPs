#include <iostream>
#include <string.h>
using namespace std;
class Stud
{
    char name[20],course[20];
    float fee;
    public:
    Stud(char name[20],char course[20])
    {
        strcpy(this->name,name);
        strcpy(this->course,course);
        fee=0;
    }
    Stud(char name[20],char course[20],float fee)
    {
        strcpy(this->name,name);
        strcpy((*this).course,course);
        (*this).fee= fee;
    }
    void show()
    {
        cout<<"Name:"<<name<<endl;
        cout<<"Course:"<<course<<endl;
        cout<<"Fee:"<<fee<<endl;
    }
};
int main()
{
    Stud s1("Salaha","MCA");
    Stud s2("Anushree","MBA",500000);
    s1.show();
    s2.show();
    return 0;
}