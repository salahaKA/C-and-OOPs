#include <iostream>
using namespace std;
int main()
{
    try{
        cout<<"Before throw\n";
        throw 1;
        cout<<"After throw\n";
    }catch(int x){
        cout<<x<<" is thrown\n";
    }
    cout<<"Thank you!\n";
    return 0;
}