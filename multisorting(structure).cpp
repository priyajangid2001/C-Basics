#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
struct stud
{ int roll;
 string name;
 void getdetail()
 {
      cout<<endl;
     cout<<"enter the roll no";
     cin>>roll;
     cout<<"enter the  name";
     cin>>name;
      cout<<endl;
 }
 int printdetail()
 {
     cout<<" roll no is";
     cout<<roll;
     cout<<" name is";
     cout<<name;
      cout<<endl;
 }
    
};
bool compare1(stud a,stud b)
{if (a.roll<b.roll)
{return true;
}
return false;
}
bool compare2(stud a,stud b)
{if (a.name<b.name)
{return true;
}
return false;
}

// int sortforroll()
//       {sort(0,n,compare);
//       }
//       int sortforname()
//       {
//       }

int main()
{
    
    int n,i,k;
    cout<<"how many student detail you want to enter";
    cin>>n;
    stud s[n];
    cout<<endl;
    for(i=0;i<n;i++)
   { 
    s[i].getdetail();
    // s.printdetail();
    cout<<endl;
     cout<<"----------------------------------------";
   }
   cout<<"how you want to sort the detail :";
   cout<<"1 for rollno,2 for name";
   cin>>k;
   switch(k)
   {
   case 1:
      sort(s,s+n,compare1);
     break;
   case 2:
     sort(s,s+n,compare2);
      break;
    default:
     cout<<"invalid value";
    break;
   }
   cout<<"after sorting";
     for(i=0;i<n;i++)
     s[i].printdetail();
   
 
}