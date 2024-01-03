#include <iostream>
using namespace std;
class Acc
{
    int accno;
    char acname[20];
    public:
    void get()
    {
        cout<<"Enter acc no and name:"; cin>>accno>>acname;
    }
    void put()
    {
        cout<<"accNo="<<accno<<"\n"<<"Name="<<acname<<endl;
    }
};
class savings:public Acc
{
    float balance;
    public:
    void showSavings()
    {
        cout<<"Enter account balance:"; cin>>balance;
        if (balance<500)
        {
            cout<<"Mininimum balance\n";
        }else{
            cout<<"Account created\n";
        }
    }
};
class curr:public Acc
{
    float balance;
    public:
    void showCurr()
    {
        cout<<"Enter account balance:"; cin>>balance;
        if (balance<1000)
        {
            cout<<"Mininimum balance\n";
        }else{
            cout<<"Account created\n";
        }
    }
};
int main()
{
    int op;
    cout<<"Enter your option:\n";
    cout<<"1-savings acc\n2-Current acc\n"; 
    cin>>op;
    if (op==1)
    {
        savings s;
        s.showSavings();
    }else if(op==2){
        curr c;
        c.showCurr();
    }else{
        cout<<"Default option\n";
    }
    return 0;   
}