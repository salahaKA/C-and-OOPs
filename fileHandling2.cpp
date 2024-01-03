#include <iostream>
#include <fstream>
using namespace std;
class student
{
    int id;
    char name[20];
    public:
    void put(){
        cout<<id<<"\t"<<name<<endl;
    }
};
int main()
{
    student s;
    ifstream File;
    File.open("stud.csv",ios::in);  
    File.read((char*)&s, sizeof(s));
    cout<<"ID"<<"\t"<<"Name"<<endl;
    cout<<"--------------------------\n";
    while (!File.eof())
    {
        s.put();
        File.read((char*)&s,sizeof(s));
    }
    File.close();
    return 0;
    
}