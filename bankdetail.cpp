
#include <iostream>
#include<cmath>
using namespace std;
class Bank{
    public:
    int accNo;
    string name;
    int bal;
    void getdetail();
    void deposit();
     void withdraw();
    void display();
     void intrest();
};
void Bank::getdetail()
{
    cout<<"enter your account no";
    cin>>accNo;
    cout<<"enter your name";
    cin>>name;
    cout<<"enter your balance";
    cin>>bal;
    
    
}
void Bank::deposit()
{
    int depamt;
    cout<<"enter the amount to be deposited";
    cin>>depamt;
    bal+=depamt;
    cout<<"Your current balance is";
    cout<<bal;
    
}
void Bank::withdraw(){
     int wdamt;
    cout<<"enter the amount to be withdrawn";
    cin>>wdamt;
    bal-=wdamt;
    cout<<"Your current balance is";
    cout<<bal;
}
void Bank::intrest(){
    double rateint,times,ci,amt;
    
    cout<<"enter the rate of intrest";
    cin>>rateint;
    cout<<"enter for how many years";
    cin>>times;
   
    amt = bal*(pow((1+rateint/100),times));
    ci=amt-bal;
    cout<<"you will get intrest of";
    cout<<ci;
    
}

int main() {
    int choice;
    Bank b1;
    b1.getdetail();
     while(choice)
    
    {
        cout<<"/n 1 for deposit ,2 for withdraw , 3 for intrest,0 for exit";
    cin>>choice;
   
    
    switch(choice)
    {
        case 1:
        b1.deposit();
        break;
        case 2:
        b1.withdraw();
        break;
        case 3:
        b1.intrest();
        break;
		case 0:
        exit(0);
        break;
        default:
        cout<<"enter the correct detail";
        break;
        
    }
    }
    
    
    
    
  
}