#include <iostream>
using namespace std;
int main() 
{
    int arr[5];
    int i,c=0,find;
    
        cout<<"enter the array";
    for(i=0;i<5;i++)

    cin>>arr[i];
    cout<<"enter the element to search";
    cin>>find;
    for(i=0;i<5;i++)
    
    if(arr[i]==find)
    {c=1;
    }
    
    if(c)
    cout<<find<<"is present";
    else
     cout<<find<<"is not present";
}
