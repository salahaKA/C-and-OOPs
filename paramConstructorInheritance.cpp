#include <iostream>
//#include <string.h>
#include <cstring>
using namespace std;
class student //base
{
    char name[20],course[20];
    public:
    student(){

    }
    student(char name[20],char course[20])
    {
        strcpy(this->name,name);
        strcpy(this->course,course);
    }
    void showStud()
    {
        cout<<"name="<<this->name<<"\n"<<"course="<<this->course<<endl;
    }
};
class marks:public student //derived
{
    int m1,m2,m3;
    public:
    marks(char name[20],char course[20],int m1,int m2,int m3):student(name,course)
    {
        //super(name,course);              error......
        //student::student(name,course); error........
        this->m1=m1;
        this->m2=m2;
        this->m3=m3;
    }
    void showMarks()
    {
        cout<<"m1="<<this->m1<<"\n"<<"m2="<<this->m2<<"\n"<<"m3="<<this->m3<<endl;
    }
};
int main()
{
    marks m("sala","MCA",45,38,49);
    m.showStud();
    m.showMarks();
    return 0;
}