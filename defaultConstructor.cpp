#include <iostream>
using namespace std;
class Test
{
    int a,b,c;
    public:
    Test(int x=10,int y=20, int z=30)
    {
        a=x;
        b=y;
        c=z;
    }
    void show()
    {
        cout<<a<<'\t'<<b<<'\t'<<c<<endl;
    }
};
int main()
{
    Test t1(1,2,3);
    Test t2(1,2);
    Test t3(1);
    Test t4;
    t1.show();
    t2.show();
    t3.show();
    t4.show();
    return 0;
}