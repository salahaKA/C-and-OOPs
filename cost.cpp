#include <iostream>
using namespace std;
class SI
{
    float p;
    int t;
    const float r;
    public:
    SI():r(2.5)  //initialize constant data member
    {

    }
    void read(float pa, float ti)
    {
        p=pa;
        t=ti;
    }
    float show()
    {
        return (p*t*r)/100;
    }
};
int main()
{
    SI s;
    s.read(1000,10);
    cout<<"Int= "<<s.show()<<endl;
    return 0;
}