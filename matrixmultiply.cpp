
#include <iostream>
using namespace std;
int main() 
{
    int r,c,i,j;
    cout<<"enter the value of rows and coloumns of matrix ";
    cin>>r>>c;
    int a[r][c],b[r][c];
    cout<<"enter the value of matrix 1";
    for(i=0;i<r;i++)
    for(j=0;j<c;j++)
    cin>>a[i][j];
    cout<<"enter the value of matrix 1";
    for(i=0;i<r;i++)
    for(j=0;j<c;j++)
    cin>>b[i][j];

        int mult[r][c];
        cout<<"after transpose"<<endl;
         for(i=0;i<r;i++)
    for(j=0;j<c;j++)
       { mult[i][j]=0;
       for(int k=0;k<c;k++)
       mult[i][j]+=a[i][k]*b[k][j];
           
       }
       
   
         for(i=0;i<c;i++)
    for(j=0;j<r;j++)
        {cout<<mult[i][j]<<"  ";
        if(j==r-1)
        cout<<endl;
        }
   
    
}