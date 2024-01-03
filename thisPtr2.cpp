#include <iostream>
using namespace std;

class Test
{
    int a,b;
    public:
    void show(int a,int b)
    {
        this->a=a;
        (*this).b=b;
    }
    void display()
    {
        cout<<a<<endl<<b;
    }
};
int main()
{
    Test t;
    t.show(10,20);
    t.display();
    return 0;
}