#include <iostream>
using namespace std;
int main() 
{int length,i;
string str;
cout<<"enter the  binary number";
getline(cin,str);
length=str.length();

for(i=length-1;i>=0;i--)
{
    if(str[i]=='1')
    {
    break;
    }
}

   for(int k=i-1;k>=0;k--) 
  {  if(str[k]=='1')

   { str[k]='0';
}
else 
{str[k]='1';
}
}
cout<<"two's complement is"<<str;



}

