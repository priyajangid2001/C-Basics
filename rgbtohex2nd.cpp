#include<iostream>
using namespace std;
int rgbtohex(int r,int g,int b)
{
int a,c,e,hex;
float rem1,rem2,rem3,s,d,f;
  a=r/16;
  rem1=r%16;
  s=rem1*16;
  c=g/16;
  rem2=g%16;
  d=rem2*16;
  e=b/16;
  rem3=b%16;
  f=rem3*16;
hex=a*100000+s*10000+c*1000+d*100+e*10+f*1;
//   if(a>10||s>10||c>10||d>10||e>10||f>10)
//   cout<<(char)a+55<<(char)s+55<<(char)c+55<<(char)d+55<<(char)e+55<<(char)f+55;
return hex;
}
int main()
{
    int r,g,b,hex;
    cout<<"enter the value of R G B";
    cin>>r>>g>>b;
    hex=rgbtohex(r,g,b);
    cout<<"hex value is"<<hex;;
    // return 0;
}