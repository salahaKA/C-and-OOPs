#include <iostream>
using namespace std;
class Circle
{
    float r;
    public:
    Circle()
    {
        r=5;
    }
    Circle(float r)
    {
        this->r= r;
    }
    void showArea();
};
void Circle::showArea()
{
    cout<<"Area="<<3.14*r*r<<endl;
}
int main()
{
    Circle c1;
    Circle c2(10);
    c1.showArea();
    c2.showArea();
    return 0;
}