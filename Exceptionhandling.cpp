#include <iostream>
using namespace std;
int main()
{
    int a,b;
    try{
        cout<<"Enter two no,s:";cin>>a>>b;
        if(b==0){
            throw 0;
        }else{
            cout<<"Division:"<<a/b<<endl;
        }
    }
    catch(int x){
        cout<<"Division not possible\n";
    }
    return 0;
}