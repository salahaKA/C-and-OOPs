#include <iostream>
using namespace std;
struct Stud
{
    char name[20];
    int id;
    void display()
    {
        cout<<"Enter name:"; cin>>name;
        cout<<"Enter Id:"; cin>>id;
        cout<<"Display Name and Id:\n"<<name<<"\t"<<id;
    }
}s1;
int main()
{
    s1.display();
    return 0;
}
