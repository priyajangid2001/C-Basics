
#include <iostream>
using namespace std;
void mean(int a[],int n)
{
 int sum=0;
 float meanval;
 for(int i=0;i<n;i++)
 {sum+=a[i];
  
 }
 meanval=(double)sum/n;
 
 cout<<"\n mean is\n"<<meanval;
}
void median(int a[],int n)
{
    float medianval;
    int i,n2;
    n2=n/2;
    if(n%2==0)
    {
        medianval=(double)(a[n2]+a[(n-1)/2])/2;
    }
    else
   { medianval=(double)a[n2];
   }
   cout<<"median is"<<medianval;
}
void mode(int a[],int n)
{
    int res;
    int count,maxc=0;
    for(int i=1;i<n;i++)
    {count=0;
    //   for(int j=1;j<n;j++)
      if (a[i]==a[i-1])
     {count++;
     
     if (count>maxc)
     {
        
        res=a[i];
         maxc=count;
     }
    
     cout<<"Mode is"<<res;
     }
     
    //  else 
    // 
    }
    // cout<<"no mode value";
}


int main() {
    int choice,n;
    cout<<"enter how many elements you want to enter";
    cin>>n;
    int a[n];
    cout<<"enter the elements";
    for(int i=0;i<n;i++)
    cin>>a[i];
    while(choice)
    {
    cout<<"\n enter 1 for mean 2 for median 3 for mode 0 to exit";
    cin>>choice;
   switch(choice)
   {
       case 1:
        mean(a,n);
        break;
        case 2:
        median(a,n);
        break;
        case 3:
        mode(a,n);
        break;
        case 0:
        exit(0);
        break;
        default:
        cout<<"invalid choice";
        break;
   }
}
}