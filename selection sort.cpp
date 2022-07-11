#include <iostream>
using namespace std;
void selectionsort(int a[],int n)
{
    int i,j,min,temp;
    for(i=0;i<n-1;i++)
  {  min=i;
        for(j=i+1;j<n;j++)
        if (a[j]<a[min])
        min=j;
        temp=a[i];
        a[i]=a[min];
        a[min]=temp;
  }
}
int main() {
    int i,n;
   cout<<"enter the no of elements you want to insert";
   cin>>n;
   int a[n];
     cout<<"enter the elements";
   for(i=0;i<n;i++)
 
   cin>>a[i];
   selectionsort(a,n);
     cout<<"elements after sorting";
   for(i=0;i<n;i++)
 
   cout<<a[i]<<" ";
  
    
}
