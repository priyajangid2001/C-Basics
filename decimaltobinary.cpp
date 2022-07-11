#include <iostream>
using namespace std;
int main() 
{
    int binary=0,a=1,b,decval;
   cout<<"enter the no";
   cin>>decval;
   
   while(decval>0)
   {b=decval%2;
   binary = binary + (b*a);
   decval = decval / 2;
  
   a=a*10;
   }
  cout<<"binary value is"<<binary; 
}

