#include <iostream>
using namespace std;
int x=200;
void fun()
{
    class Test
    {
        int x;
        public:
        void show()
        {
            x=100;
            cout<<"Local x="<<x<<endl;
            cout<<"Global x="<<::x<<endl;
        }
    };
    Test t;
    t.show();
}
int main()
{
    fun();
    return 0;
}