// unary operator
#include <iostream>
using namespace std;
class Test
{
    int a;
    public:
    Test(){
        a=0;
    }
    void operator ++()
    {
        a++;
    }
    void operator --()
    {
        a--;
    }
    void show()
    {
        cout<<"a="<<a<<endl;
    }
};
int main()
{
    Test t;
    t.show();
    ++t;
    t.show();
    --t;
    t.show();
    return 0;
}