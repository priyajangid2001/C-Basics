#include <iostream>
using namespace std;
int main() 
{int n,a,b;
cout<<"enter the no's";
cin>>a>>b;
cout<<"enter 1 for addition\n";
cout<<"enter 2 for subtraction\n";
cout<<"enter 3 for multiplication\n";
cout<<"enter 4 for division\n";
cin>>n;
switch(n)
 {
     case 1:
     cout<<" addition of no is  "<<a+b;
     
     break;
     case 2:
     cout<<" subtraction of no is  "<<a-b;
     break;
     
     case 3:
 cout<<" multiplication of no is  "<<a*b;
     break;
      case 4:
 cout<<" divisionof no is  "<<a/b;
     break;
     default:
     cout<<"invalid choice ";
     
   
}

}

