#include <iostream>
using namespace std;
void swap(int* a, int* b)
{
    int t = *a;
    *a = *b;
    *b = t;
}
void partition(int a[],int lb,int ub)
{int pivot,start,end;
    pivot=a[lb];
    while(start<end)

    {
        while(a[start<=pivot])
        {start++;
        }
        while(a[end]>pivot)
        {end--;
}
if(start<end)
{swap(a[start],a[end]);
}
}
swap(a[lb],a[end]);
return (end);
}
void quicksort(int a[],int lb,int ub)
{
if(lb<ub)

{int loc=partition(a,lb,ub);
quicksort(a,lb,loc-1);
quicksort(a,loc+1,ub);
}
}
int main() {
  int n,i;
  cout<<"enter the no of elements in array";
  cin>>n;
  int a[n];
  cout<<"enter the elements";
  for(i=0;i<n;i++)
  cin>>a[i];
  quicksort(a,0,n);
  cout<<"after sorting";
  for(i=0;i<n;i++)
  cout<<a[i];
  
}
