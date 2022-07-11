
#include <iostream>
#include<algorithm>
using namespace std;

int main() {
    int i,n,ans;
    int ma,mi;
    cout<<"enter the no ofelements you want to enter";
    cin>>n;
    int a[n];
    cout<<"enter the elements";
    
    for(i=0;i<n;i++)
  {  cin>>a[i];
  }
  ma=a[0];
  mi=a[0];
  ans=a[0];
      for(i=1;i<n;i++)
      {

   int temp=max({a[i],a[i]*ma,a[i]*mi});
    mi=min({a[i],a[i]*ma,a[i]*mi});
    ma=temp;
    ans=max(ans,ma);
    
  }
    
   cout<<ans;
    
    
}