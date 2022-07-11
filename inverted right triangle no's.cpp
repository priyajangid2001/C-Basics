// Online C++ compiler to run C++ program online

#include <iostream>
#include<cstring>
using namespace std;
int main() {
  int r,i,j,count=0;
  cout<<"enter the no of rows ";
  cin>>r;
  for(i=r;i>0;i--)
  {count+=i;}
  for(i=0;i<r;i++)
 {  for (j=r;j>i;j--)
 { cout<<count;
 count--;
 
}
cout<<endl;
}
}

 
  


