#include <iostream>
using namespace std;
class shape
{
    protected:
    float d1,d2;
    public:
    void getd()
    {
        cin>>d1>>d2;
    }
    virtual float area()=0;
};
class Triangle: public shape
{
    public:
    float area()
    {
        return 0.5*d1*d2;
    }
};
class Rectangle: public shape
{
    public:
    float area(){
        return d1*d2;
    }
};
int main()
{
    Triangle t;
    cout<<"Enter b and h value:";
    t.getd();
    cout<<"Area of triangle is:"<<t.area()<<endl;

    Rectangle r;
    cout<<"Enter l and b value\n";
    r.getd();
    cout<<"Area of rectangle is:"<<r.area()<<endl;

    return 0;
}