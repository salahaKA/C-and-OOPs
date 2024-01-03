#include <iostream>
using namespace std;
class Stud
{
    int id, sub[5];
    char name[20];
    public:
    void get();
    
    void result();
};
void Stud::get()
{
    cout<<"id,name:"<<endl;
    cin>>id>>name;
    cout<<"Enter five subject marks:\n";
    for (int i = 0; i < 5; i++)
    {
        cin>>sub[i];
    }
}

void Stud::result()
{
    int total=0;
    float avg;
    for (int i = 0; i < 6; i++)
    {
        total= total+ sub[i];
    }
    cout<<"Total="<<total<<endl;
    avg= total/0.6;
    cout<<"Average="<<avg<<endl;
    
}
int main()
{
    Stud s;
    s.get();
    

    s.result();
    return 0;
}