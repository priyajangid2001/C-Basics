#include <iostream>
using namespace std;
int main() {
    int n,r,*num,*reverse=0,rem;
    cout<<"enter the number";
    cin>>n;
    num=&n;
    reverse=&r;
    while(*num>0)
   { rem=*num%10;
    *reverse=*reverse*10+rem;
    *num=*num/10;
   }
    cout<<*reverse<<endl;
}
