#include <iostream>
using namespace std;
int main() {
   int n ,a ,d=0;
   cout<<"enter the no";
   cin>>n;
   while(n>0)
   {a=n%10;
   n=n/10;
   d=d*10+a;
   }
   cout<<"print the reverse of above no "<<d;
}
