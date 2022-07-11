#include <iostream>
using namespace std;
int main() 
{int month;
cout<<"enter the month";
cin>>month;
switch(month)
 {
     case 1:
     case 3:
     case 5:
     case 7:
     case 8:
     case 10:
     case 12:
     cout<<"this month has 31 days";
     break;
     case 4:
     case 6:
     case 11:
     case  9:
     cout<<"this month has 30 days";
     break;
     
     case 2:
     cout<<"it has either 28 or 29 days";
     break;
     default:
     cout<<"invalid month";
     
   
}

}
