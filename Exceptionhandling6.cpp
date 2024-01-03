#include <iostream>

using namespace std;
int main()
{
    try{
        cout<<"Outer try block\n";
        try{
            cout<<"Inner try\n";
            throw 10;
        }catch(int x){
            cout<<"Inner catch "<<endl;
            throw x;
        }
    }catch(int y){
        cout<<"outer catch\n";
    }
    return 0;
}