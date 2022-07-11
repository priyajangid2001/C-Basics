#include <iostream>
using namespace std;
int main() 
{int i,a,b,lcm;
cout<<"enter the two values";
cin>>a;
cin>>b;
if(a>b)
lcm=a;
else 
lcm=b;

while(1)
{
if(lcm%a==0&&lcm%b==0)

// cout<<i<<" ";
{cout<<" LCM is "<<lcm;
break;
}
lcm++;
}
return 0;
}
