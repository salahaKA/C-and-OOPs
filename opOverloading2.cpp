#include <iostream>
#include <string.h>
using namespace std;
class Test
{
    char st[20];
    public:
    void get()
    {
        cout<<"Enter a string:";
        cin>>st;
    }
    void show()
    {
        cout<<"String is:"<<st<<endl;
    }
    Test operator +(Test t2)
    {
        Test t3;
        strcpy(t3.st,st);  //s1 implicit and s2 explicit and t3 local.
        strcat(t3.st,"");
        strcat(t3.st,t2.st);
        return t3;
    }
};
int main()
{
    Test t1,t2,t3;
    t1.get();
    t2.get();
    t3= t1+t2;
    t3.show();
    return 0;
}