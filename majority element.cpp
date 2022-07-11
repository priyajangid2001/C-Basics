#include <iostream>
using namespace std;
int main() 
{
    int maxc=0,i,j,n,c=0,ind=-1;
   cout<<"enter the no of elements you want to insert";
   cin>>n;
   int a[n];
     cout<<"enter the elements";
   for(i=0;i<n;i++)
 
   cin>>a[i];
   for(i=0;i<n;i++)
    {  for(j=0;j<n;j++)
      {if(a[i]==a[j])
      c++;
      }
      if(c>maxc)
      maxc=c;
      ind=i;
    }
    if(maxc>n/2)
    cout<<"the majority element is"<<a[ind];
    else
    cout<<"no majority element";
    
}
