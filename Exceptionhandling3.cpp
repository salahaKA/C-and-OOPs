#include <iostream>
using namespace std;
int main()
{
    try{
        cout<<"throwing, any type of exception\n";
        throw 'A';  //this may be int,char,float, bool or any dt, they are throwned by catch(...) ie, implicit type casting.
    }catch(...){
        cout<<"Exception throwned\n";
    }
    return 0;
}