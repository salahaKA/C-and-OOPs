#include <iostream>
using namespace std;
class A
{
    int a,b;
    public:
        void put(int x,int y)
        {
            a=x;
            b=y;
        }
        int isBig(){
            if(a>b){
                return a;
            }else{
                return b;
            }         
        }
};
int main()
{
    A res;
    res.put(10,2);
    int max= res.isBig();
    cout<<"Maximum is:"<<max;
    return 0;
}

