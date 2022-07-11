
#include <iostream>
#include<cstring>
#include<string>
using namespace std;
bool stringcmp(string one,string two)
{
    int n,m;
    string temp;
    if(one.length()!=two.length())
    
        return false;
        // cout<<"strings are not rotation ";
    
    
        temp=one+one;
        n=temp.length();
        m=two.length();
        // length=one.length();
      
     
         for(int i=0;i<n-m;i++)
         {
             int flag=1;
            for(int j=0;i<m-1;i++)
            {if(two[j]!=temp[i+j])
            { 
                flag=0;
                break;
                // cout<<"strings are not rotation ";
         }
            }
         if(flag==1)
         {return true;
         } 
                
            }
         
          return false;   
         }
       
    //   temp=one[0];
      
    //   for(int i=0;i<two.length();i++)
    //   if(temp==two[i])
    //   {
    //       for(int j=0;j<one.length();j++)
    //         {  if(one[j]==two[i])
           
    //       cout<<endl<<" strings are rotation ";
    //         }
    //         cout<<endl<<"strings are not rotation ";
    //   }
      
    //  }


int main() {
   string one,two;
   cout<<"enter the first string";
   getline(cin,one);
    cout<<"enter the second string";
   getline(cin,two);
   cout<<one<<endl<<two;
   if(stringcmp(one,two)){
       cout<<endl<<" strings are rotation ";
   }
   else
   {cout<<endl<<" strings are not rotation ";
   }
}