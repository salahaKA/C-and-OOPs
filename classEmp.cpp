#include <iostream>
#include <string.h>
using namespace std;
class emp
{
    int eid;
    char ename[20];
    float salary;
    public:
        void put(int id, char name[20],float bpay);
        void get();
};
void emp::put(int id, char name[20],float bpay)
{
    eid= id;
    strcpy(ename,name);
    salary= bpay;
}
void emp::get()
{
    cout<<"Id is:"<<eid<<endl;
    cout<<"Name is:"<<ename<<endl;
    cout<<"Salary is:"<<salary<<endl;
}
int main()
{
    emp e;
    e.put(29,"salaha",10000);
    e.get();
    return 0;
}