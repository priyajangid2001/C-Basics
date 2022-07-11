#include <iostream>
using namespace std;
int main() {
    int i,j,r;
  cout<<"enter the no of rows";
  cin>>r;

  for(i=1;i<=r;i++)
   {
    //   cout<<endl;
       for(j=1;j<=r-i;j++)
      { cout<<" ";
      }
      for(int k=1;k<=2*i-1;k++)
   {   cout<<"*";
   }
   
   cout<<"\n";
   }
    for(i=r-1;i>=1;i--)
   {
    //   cout<<endl;
       for(j=1;j<=r-i;j++)
      { cout<<" ";
      }
      for(int k=1;k<=2*i-1;k++)
   {   cout<<"*";
   }
   cout<<"\n";
   
   }
}
