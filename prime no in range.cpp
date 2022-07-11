#include <iostream>
using namespace std;
int main() {
  int a,b,flag;
  
  cout<<"enter the lower range ";
  cin>>a;
  cout<<"enter the upper range";
  cin>>b;
  
  
for(int i=a;i<=b;i++)
 {if(i==0||i==1)
 continue;
 flag=1;
 
 for(int j=2;j<=i/2;++j)
 {if(i%j==0)
 {flag=0;
 break;
}
}
if(flag==1)
cout<<i<<endl;
}
  
 
  return 0;
}  
