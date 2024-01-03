#include <iostream>
using namespace std;
int main()
{
    int **p,m,n,i,j;
    cout<<"Enter number of raws and columns:";cin>>m>>n;
    p= new int*[m];
    for(i=0;i<m;i++){
        p[i]=new int[n];
    }
    cout<<"Enter"<<m*n<<"elements:";
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin>>p[i][j];
        }
    }
    cout<<"Dsplay:"<<endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout<<p[i][j];
        }
    }
    delete p;
    return 0;
    
}