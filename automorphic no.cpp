#include <iostream>
using namespace std;
int main() 
{int num,sq,count=0;
    
    cout<<"enter the no";
   cin>>num;
   sq=num*num;
   while(num>0)
   {if(num%10!=sq%10)
  { count++;
   }

num/=10;
sq/=10;
}
if(count==0)
cout<<"it is an automorphic no";
else
cout<<"it is not an automorphic no";
   
}
