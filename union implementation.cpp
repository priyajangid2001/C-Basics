#include <iostream>
using namespace std;
union employee{
    int id;
    int salary;
    char dept[20];
    char name[50];
};

    int main()
    {
         int n;
    cout<<"how many employee details you want to enter";
    cin>>n;
    union employee e;
   
    cout<<"size of employee is"<<sizeof(e)<<"byte"<<endl;
    
        cout<<"enter the employee ID"<<endl;
        cin>>e.id;
         cout<<"enter the employee name "<<endl;
         cin>>e.name;
         cout<<"enter the employee department "<<endl;
         cin>>e.dept;
         cout<<"enter the employee salary "<<endl;
         cin>>e.salary;
    
   
     cout<<" employee id is  "<<e.id<<endl;
        cout<<" employee name is  "<<e.name<<endl;
cout<<" employee dept is   "<<e.dept<<endl;
        cout<<" employee salary is  "<<e.salary<<endl;
    
    
     
    
    
    
    
    
    
   return 0;
}
