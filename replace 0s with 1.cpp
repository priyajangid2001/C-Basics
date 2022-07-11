#include <iostream>
using namespace std;
int main() 
{int n,digit,rev=0;
cout<<"enter the integer value";
cin>>n;
if(n==0)
rev=1;
while(n>0)
{digit=n%10;
if(digit==0)
digit=1;
n=n/10;
rev=rev*10+digit;

}
n=0;
while(rev>0)
{
    int r=rev%10;
    n=n*10+r;
    rev/=10;
}

cout<<"value after replacing 0 with 1 is"<<n;

   


}
