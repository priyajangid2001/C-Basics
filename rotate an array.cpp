#include <iostream>
#include<cmath>
using namespace std;
int main() 
{
    int n,i,temp;
    cout<<"enter the size of array";
    cin>>n;
     int a[n];
    cout<<"enter the array ";
    for(i=0;i<n;i++)
    cin>>a[i];
    temp=a[0];
     for(i=0;i<n;i++)
    { a[i-1]=a[i];
    }
    a[n-1]=temp;
     for(i=0;i<n;i++)
     cout<<a[i];
}
