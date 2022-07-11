

#include <iostream>
#include<string>
#include<algorithm>
#include<limits>
using namespace std;
bool compare(string a,string b)
{
    if(a.length()==b.length())
    return a<b;
    else 
    {return a.length()>b.length(); 
    }
}
int main() {
   int n,i;
   cout<<"enter no of strings";
   cin>>n;
   cin.ignore(numeric_limits<streamsize>::max(), '\n');
   string s[n];
   cout<<"enter the strings"<<endl;
   for(i=0;i<n;i++)
   getline(cin,s[i]);
   sort(s,s+n,compare);
   cout<<"after sorting";
     for(i=0;i<n;i++)
     cout<<s[i]<<endl;
}