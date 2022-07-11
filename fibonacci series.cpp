#include <iostream>
using namespace std;
int main() {
   
  int a=0,b=1,c,n,i=1;
  cin>>n;
  while(i<=n)
  {cout<<a;
  i++;
  c=b;
  b=a+b;
  a=c;
}
}  

