// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
void dectohex(int n)
{
    int temp=0,i=0,j;
    char hex[100];
    while(n!=0)
    {    temp=n%16;
        if(temp<10)
       { hex[i]=temp+48;
    }
    else
    {
        hex[i]=temp+55;
    }
    i++;
   n=n/16;
    }
for(j=i-1;j>=0;j--)
cout<<hex[j];

}
// { 
//  hexval+=dectohex(r);
//   hexval+=dectohex(g);
//   hexval+=dectohex(b);
//  return hexval;
    
// }
int main() {
      int r,g,b,hex;
    cout<<"enter the value of R G B";
    cin>>r>>g>>b;
    int hexval;
  dectohex(r);
  dectohex(g);
  dectohex(b);
//   cout<< rgbtohex(r,g,b);
    cout<<"hex value is";

}