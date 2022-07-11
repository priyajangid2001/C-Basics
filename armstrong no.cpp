#include <iostream>
using namespace std;
int main() 
{
    int n,a,b,c=0;
   cout<<"enter the no";
   cin>>n;
   a=n;
   while(n>0)
   {b=n%10;
   c=c+b*b*b;
   n=n/10;
   
   }
   if(a==c)
   cout<<"it is an armstrong no";
   else 
    cout<<"it is not an armstrong no";
  
}
