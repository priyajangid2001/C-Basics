#include <iostream>
#include<cmath>
using namespace std;
int main() 
{int x,n,i,sum=0;
cout<<"enter the value of x and n ";
cin>>x>>n;
for(i=0;i<n;i++)
{sum+=pow(x,i);
cout<<sum<<" ";
}
cout<<endl;
cout<<sum;



}

