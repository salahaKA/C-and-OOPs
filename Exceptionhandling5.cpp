#include <iostream>
using namespace std;
class Test
{
    public:
    Test(){
        cout<<"Constructor block\n";
    }
    ~Test(){
        cout<<"Destructor block\n";
    }
};
int main()
{
    try{
        cout<<"Welcome\n";
        Test t;
        throw 2.1;
        cout<<"Testing destructor\n";
    }catch(...){
        cout<<"Thank you!";
    }
    return 0;
}