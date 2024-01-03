#include <iostream>
using namespace std;
class stu
{
    int id;
    char name[20];
    public:
    void showStu()
    {
        cout<<"Enter student id and name:"; cin>>id>>name;
        cout<<"id="<<id<<"\n"<<"name="<<name<<endl;
    }
};
class marks:public stu
{
    protected:
    int m1,m2,m3;
    public:
    void showMark()
    {
        cout<<"Enter three marks:"; cin>>m1>>m2>>m3;
        cout<<"m1="<<m1<<"m2="<<m2<<"m3="<<m3;
    }
};
class sports //base
{
    protected:
    int spmark;
    public:
    void showSport()
    {
        cout<<"Enter sports marks:"; cin>>spmark;
        cout<<"sports mark="<<spmark;
    }
};
class result:public marks, public sports
{
    int total;
    float avg;
    public:
    void  showResult()
    {
        total= m1+m2+m3;
        avg= (m1+m2+m3)/3.0;
        cout<<"total="<<total<<endl<<"avg="<<avg<<endl;
        cout<<"avg+sports="<<avg+spmark;
    }
};
int main()
{
    result r;
    r.showStu();
    r.showMark();
    r.showSport();
    r.showResult();
    return 0;
}
