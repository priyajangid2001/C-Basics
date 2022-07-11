
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"enter how many elements you want";
    cin>>n;
   int a[n];
   cout << "Enter elements: ";

   for(int i = 0; i < n; ++i)
      cin >> a[i];

   cout << "You entered: ";
   for(int i = 0; i < n; ++i)
      cout << endl << *(a + i);

   return 0;
}



