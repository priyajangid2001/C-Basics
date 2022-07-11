
#include <iostream>
using namespace std;
struct employee{
    int id;
    int salary;
    char dept[20];
    char name[50];
    void getdetails()
    {
        cout<<"enter the employee ID"<<endl;
        cin>>id;
         cout<<"enter the employee name "<<endl;
         cin>>name;
         cout<<"enter the employee department "<<endl;
         cin>>dept;
         cout<<"enter the employee salary "<<endl;
         cin>>salary;
    }
    void printdetails()
    { cout<<" employee id is  "<<id<<endl;
        cout<<" employee name is  "<<name<<endl;
cout<<" employee dept is   "<<dept<<endl;
        cout<<" employee salary is  "<<salary<<endl;
    }
    };
int main() {
    int n;
    cout<<"how many employee details you want to enter";
    cin>>n;
    employee e;
    for(int i=0;i<n;i++)
    { 
     e.getdetails();
        e.printdetails();
    }
     
    
    
    
    
    
    
   return 0;
}
