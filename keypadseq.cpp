#include<bits/stdc++.h>
using namespace std;
string keypadseq(string s[],string str)
{
     int i,j,len;
    string ans="";
 len=str.length();
    for(i=0;i<len;i++)
 { if(str[i] == ' ')
      ans+="0"; 
     
      else
     {  j=str[i]-'A';
      ans+=s[j];
      
     }
    
 }
  return ans;
}
int main()
{ string str;

 cout<<"enter your input string";
 getline(cin,str);
 

 
 string s[]={"2","22","222", "3","33","333", "4","44","444",
                    "5","55","555", "6","66","666",
                   
                    "7","77","777","7777","8","88","888",
                    
                    "9","99","999","9999"};
  
  cout<<keypadseq(s,str);
 return 0; 
}
   