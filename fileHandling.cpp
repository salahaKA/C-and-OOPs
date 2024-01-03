#include <iostream>
#include <fstream>
using namespace std;
class student
{
    int id;
    char name[20];
    public:
    void get(){
        cout<<"Enter id and name:"; cin>>id>>name;
    }
};
int main()
{
    student s;
    ofstream File;
    File.open("student.csv",ios::app);  // File.open("student.csv");
    char op;
    do{
        s.get();
        File.write((char*)&s,sizeof(s));
        cout<<"One raw created\n";
        cout<<"Any more student?[Y/N]:"; cin>>op;
    }while (op=='Y'||op=='y');
    File.close();
    return 0;
    
}