#include <iostream>
using namespace std;
int main() {
    int a,b,c;
    cout<<"enter first value ";
    cin>>a;
    cout<<"enter second value ";
    cin>>b;
    if(a!=b||a==1&&b==1)
    {
        c=0;
    }
    else 
    {c=1;
    }
    cout<<"NOR output is"<<c;
   
}

