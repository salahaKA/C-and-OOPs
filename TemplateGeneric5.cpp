#include <iostream>
using namespace std;
template <class t>
class Test{
    t a,b;
    public:
    void get(){
        cin>>a>>b;
    }
    t sum();
};
template <class t>
t Test<t>::sum(){
    return a+b;
}
int main(){
    Test<int> t1;
    Test<float> t2;
    cout<<"enter 2 integer values:"; t1.get();
    cout<<"sum="<<t1.sum()<<endl;
    cout<<"enter 2 float values:"; t2.get();
    cout<<"sum="<<t2.sum()<<endl;
    return 0;


}