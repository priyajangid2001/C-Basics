#include <iostream>
using namespace std;
int main() {
  int sum=0,n,a;
  
  cout<<"enter the no";
  cin>>n;
  
  while(n>0)
  {a=n%10;
  sum=sum+a;
  
  n=n/10;
  }
  cout<<"sum of the digits is "<< sum;
}  
