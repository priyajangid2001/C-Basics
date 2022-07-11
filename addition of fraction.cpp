#include <iostream>
#include<cmath>
using namespace std;
int main() 
{
    int a,b,c,d;
    float r,r1,r2;;
    cout<<"enter the value of a/b and c/d";
    cin>>a>>b>>c>>d;
   r1=a*d+c*b;
   r2=b*d;
   r=r1/r2;
   cout<<"answer is"<<r;
}
