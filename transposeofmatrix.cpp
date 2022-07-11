
#include <iostream>
using namespace std;
int main() {
    int r,c,i,j;
    cout<<"enter the value of rows and coloumns";
    cin>>r>>c;
    int a[r][c];
    cout<<"enter the value of matrix";
    for(i=0;i<r;i++)
    for(j=0;j<c;j++)
    cin>>a[i][j];
    cout<<"your matrix is"<<endl;
    for(i=0;i<r;i++)
   { for(j=0;j<c;j++)
       { cout<<a[i][j]<<"  ";
        if(j==c-1)
        cout<<endl;
           
       }
   }
        int transpose[c][r];
        cout<<"after transpose"<<endl;
         for(i=0;i<r;i++)
    for(j=0;j<c;j++)
       { transpose[j][i]=a[i][j];
           
       }
       
   
         for(i=0;i<c;i++)
    for(j=0;j<r;j++)
        {cout<<transpose[i][j]<<"  ";
        if(j==r-1)
        cout<<endl;
        }
   
    
}