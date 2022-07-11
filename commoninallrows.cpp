/*print the common element present in all rows of the given matrix
eg:-  the matrix is
      1 2 3 5
      4 6 3 1
      8 3 1 3
      3 7 1 2

      output will be
     element present in all row is 1 3
*/
#include <iostream>
using namespace std;
int main()
{
  int r, c, i = 0, j, count,len=0;
  
  cout << "enter the value of rows and coloumns";
  cin >> r >> c;
  int arr[r];
  int a[r][c];
  cout << "enter the value of matrix ";
  for (i = 0; i < r; i++)
    for (j = 0; j < c; j++)
    {
      cin >> a[i][j];
    }
  for (i = 0; i < r; i++)
  {
    int count = 1;
    for (j = 1; j < r; j++)
    {
      for (int k = 0; k < c; k++)
      {
        if (a[0][i] == a[j][k])
        {
         
          count++;
          break;
        }
      }
    }
    if (count==r)
  {
    arr[len]=a[0][i];
    len++;
  }
  }
  for (int i = 0; i < len; i++)
  {
    cout<<"element present in all row is"<<arr[i]<<endl;
  }
}
