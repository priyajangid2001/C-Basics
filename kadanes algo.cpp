
#include <iostream>
using namespace std;
int main() {
    int i,local=0,global=0,n;
    
    cout<<"enter the no ofelements you want to enter";
    cin>>n;
    int a[n];
    cout<<"enter the elements";
    
    for(i=0;i<n;i++)
    cin>>a[i];
    for(i=0;i<n;i++)
    {local=max(a[i],a[i]+local);
    if (local>global)
   { global=local;
   }
    }
    cout<<global;
    
    
}