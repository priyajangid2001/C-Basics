#include <iostream>
using namespace std;
int main() {
   int n,a,b,c=0;
   cout<<"enter the no";
   cin>>n;
   a=n;
   while(n>0)
   {b=n%10;
   n=n/10;
   c=c*10+b;
   }
   if(a==c)
   cout<<"it is a palindrome no";
   else 
    cout<<"it is not a palindrome no";
  
}  

