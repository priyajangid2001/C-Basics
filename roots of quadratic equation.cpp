#include <iostream>
#include<cmath>
using namespace std;
int main() 
{
    int a,b,c,r1,r2;
    cout<<"enter the value of a,b,c";
    cin>>a>>b>>c;
    int tmp,tmp2;
    tmp=(b*b)-4*a*c;
    tmp2=sqrt(tmp);
    r1=(-b)+tmp2/2*a;
    r2=(-b)-tmp2/2*a;
    cout<<"root is"<<r1;
      cout<<"and "<<r2;
}
