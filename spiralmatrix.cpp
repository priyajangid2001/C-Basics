#include <iostream>

using namespace std;
int main() {
   int r,c,i,j;
   cout<<"enter the value of row and coloumn";
   cin>>r>>c;
   int a[r][c];
   cout<<"enter the value of  matrix";
   for(i=0;i<r;i++)
   for(j=0;j<c;j++)
   {cin>>a[i][j];
   }
   cout<<"spiral of above matrix is";
    int dir=0,top,down,left,right;
    top=0;
    down=r-1;
    left=0;
    right=c-1;
    while (top<=down&&left<=right)
   { if(dir==0)
 {   for(i=left;i<=right;i++)
   { cout<<a[top][i];
   cout<<" ";
   }
   top++;
   }
   if(dir==1)
  { for(i=top;i<=down;i++)
   {cout<<a[i][right]<<" ";
   }
   right--;
   }
    if(dir==2)
 {   for(i=right;i>=left;i--)
   { cout<<a[down][i]<<" ";
   }
   down--;
   }
   if(dir==3)
  { for(i=down;i>=top;i--)
  { cout<<a[i][left]<<" ";}
left++;
}
dir=(dir+1)%4;
}
}