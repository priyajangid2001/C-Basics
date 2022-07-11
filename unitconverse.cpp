#include<iostream>
using namespace std;
 int main()
 {   float k,p,o;
     
     cout<<"unit conversions for weight to gram"<<endl;
     char first;
    
     float n;
     cout<<"enter the 1 for killogram 2 for pound 3 for ounce";
     cin>>first;
     cout<<"enter the value";
     cin>>n;
     k=(1000)*n;
     p=(453.592)*n;
     o=(28.3495)*n;
    //  cout<<"enter to which unit you want to convert";
    //  cin>>second;
     switch(first)
     {
         case '1':
         
         cout<<n<<"killograms"<<"is equals to"<<k<<"grams";
         break;
         case '2':
         cout<<n<<"pound"<<"is equals to"<<p<<"grams";
         break;
         case '3':
         cout<<n<<"ounce"<<"is equals to"<<o<<"grams";
         break;
         default:
         cout<<"invalid conversion type";
         break;
     
         
     }
 }