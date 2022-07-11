#include <iostream>
using namespace std;
int main() 
{
    int binaryno,a=1,b,decval=0;
   cout<<"enter the no";
   cin>>binaryno;
   
   while(binaryno>0)
   {b=binaryno%10;
   decval=decval+b*a;
   binaryno=binaryno/10;
   a=a*2;
   }
  cout<<"decimal value is"<<decval; 
}

