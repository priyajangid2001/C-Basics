#include <iostream>
#include<cstring>
using namespace std;
int main() {
  int length,i;

 string str;
  cout<<"enter the string ";
  getline(cin,str); 

  length=str.length();

  for(i=0;i<length;i++)
  
 { if(i==0||i==(length-1))
  {
      str[i]=toupper(str[i]);
      }
  else 
  if(str[i]==' ')
  {str[i+1]=toupper(str[i+1]);
  str[i-1]=toupper(str[i-1]);
  
  }
 }

  cout<<"after capitalizing"<<str;
  
  

}  
