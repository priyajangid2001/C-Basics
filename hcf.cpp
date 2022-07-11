#include <iostream>
using namespace std;
int main() 
{int i,a,b,hcf=1;
cout<<"enter the two values";
cin>>a;
cin>>b;
for(i=1;i<=a||i<=b;i++)
if(a%i==0&&b%i==0)
hcf=i;
// cout<<i<<" ";
cout<<" higghest common factor is "<<hcf;



   


}

