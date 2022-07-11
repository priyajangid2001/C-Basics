
#include <iostream>
#include<string>
#include<algorithm>
using namespace std;
int kthsmallest(int a[3][3],int n,int k)
{
    int arr[n*n];
    int v=0,i,j;
     for(i=0;i<n;i++)
   {for(j=0;j<n;j++)
  { arr[v]=a[i][j];
   v++;
  }
   }
    sort(arr, arr + (n*n));
  int result = arr[k - 1];
  return result;
    
}
int main() {
    int n,ret,i,j,k;
  
   int a[3][3];
   cout<<"enter the values of 3*3 matrix";
   for(i=0;i<3;i++)
   {for(j=0;j<3;j++)
   {cin>>a[i][j];
}
}
cout<<"enter the kth value ";
cin>>k;
ret=kthsmallest(a,3,k);
cout<<"kth smallest value is";
cout<<ret;
return 0;
}