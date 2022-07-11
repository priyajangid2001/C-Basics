
#include <iostream>
using namespace std;
// int maxone(int r,int c,int a[r][c])
// { 
//     int maxc=0,index=-1;
  
//     for(int i=0;i<r;i++)
//     {  int count=0;
// for(int j=0;j<c;j++)
// {if(a[r][c]==1){
//     count++;
// }
// }
// if(count>maxc)
// {maxc=count;
// index=i;
// }
// }
// return index;
// }
int main()
{ int i,j,r,c;

cout<<"enter the no of rows";
cin>>r;
cout<<"enter the no of coloumn";
cin>>c;
int a[r][c];
cout<<"enter the elements of matrix"<<endl;
for(i=0;i<r;i++){
for(j=0;j<c;j++){
cin>>a[i][j];
    }
}
for(i=0;i<r;i++){
for(j=0;j<c;j++){
cout<<a[i][j]<<" ";
    }
    cout<<endl;
}
// cout<<"row with max 1 is"<<endl;
    int maxc=0,index=-1;
  
    for(int i=0;i<r;i++)
    {  int count=0;
for(int j=0;j<c;j++)
{if(a[i][j]==1){
    count++;
    // cout<<"----"<<count;
}
}
if(count>maxc)
{maxc=count;
index=i;
}
// cout<<index;
}
cout<<"row with max 1 is "<<index<<endl;


// maxone(r,c,a[r][c]);
    // return 0;
}
