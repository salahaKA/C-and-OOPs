#include <iostream>
using namespace std;
class sample
{
    static int count;
    public:
    sample()
    {
        count++;
        cout<<count<<"Object created."<<endl;
    }
    ~sample()
    {
        cout<<count<<"object deleted."<<endl;
        count--;
    }
};
int sample::count;
int main()
{
    sample s1,s2,s3;
    return 0;
}