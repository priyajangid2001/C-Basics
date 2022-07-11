#include<iostream>
using namespace std;
int main()
{int a,b;
cout<<"enter the value to be swapped";
cin>>a>>b;
swap(a,b);
cout<<"after swapping"<<endl;
cout<<a<<endl;
    cout<<b<<endl;
}
void swap(int a,int b)
{
    int c;
    c=a;
    a=b;
    b=c;
    
}
