#include <iostream>
using namespace std;
class Test
{
    public:
    static int a;
    void get()
    {
        a=10;
        cout<<a<<endl;
    }
};
int Test::a;
int main()
{
    Test::a=100;
    cout<<"a="<<Test::a<<endl;
    Test t;
    t.get();
    return 0;
}