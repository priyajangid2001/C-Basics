
#include <iostream>
using namespace std;
void merge2sorted(int a1[],int a2[],int n1,int n2,int a3[])
{int i=0,j=0,k=0;
while(i<n1&&j<n2)
if(a1[i]<a2[j])
  a3[k++]=a1[i++];
  else 
  a3[k++]=a2[j++];
  while(i<n1)
   a3[k++]=a1[i++];
  while(j<n2)
   a3[k++]=a2[j++];
}
int main() {
    int i,n1,n2,j,k,n;
   cout<<"enter the no of elements you want to insert in arr1";
   cin>>n1;
   int a1[n1];
     cout<<"enter the elements of arr1";
   for(i=0;i<n1;i++)
 
   cin>>a1[i];
   cout<<"enter the no of elements you want to insert in arr2";
   cin>>n2;
   int a2[n2];
     cout<<"enter the elements of arr2";
   for(i=0;i<n2;i++)
 
   cin>>a2[i];
   n=n1+n2;
   int a3[n];
   merge2sorted(a1,a2,n1,n2,a3);
   
  
     cout<<"elements after sorting";
   for(k=0;k<n;k++)
 
   cout<<a3[k]<<" ";
  
    
}
