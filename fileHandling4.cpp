#include <iostream>
#include <fstream>
using namespace std;
class stud{
    int id;
    char name[20];
    public:
    void enq();
};
void stud::enq()
{
    stud s;
    ifstream File("student.csv", ios::in);
    int idno, found=0;
    cout<<"Enter student id:"; cin>>idno;
    File.read((char*)&s,sizeof(s));
    while(!File.eof()){
        if(s.id==idno){
            cout<<"ID\tName\n";
            cout<<"------------------\n";
            cout<<s.id<<"\t"<<s.name<<endl;
            found=1;
            break;
        }
        File.read((char*)&s,sizeof(s));
    }
    File.close();
    if(found==0){
        cout<<"Student not found\n";
    }
}
int main()
{
    stud s;
    s.enq();
    return 0;
}