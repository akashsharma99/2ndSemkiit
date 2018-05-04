#include<iostream>
#include<math.h>
using namespace std;
int main()
{
      int i,j,r,c;
      float norm=0.0;
      cout<<"Creating a matrix\n";
      cout<<"How many rows?\n";
      cin>>r;
      cout<<"How many columns?\n";
      cin>>c;
      int** a=(int**)calloc(r,sizeof(int*));
      for(i=0;i<r;i++)
            a[i]=(int*)calloc(c,sizeof(int));
      cout<<"enter the elements\n";
      for(i=0;i<r;i++)
      {
            for(j=0;j<c;j++)
            {
                  cin>>a[i][j];
                  norm=norm+a[i][j]*a[i][j];
            }
      }
      cout<<"The matrix is..\n";
      norm=sqrt(norm);
      for(i=0;i<r;i++)
      {
            for(j=0;j<c;j++)
            {
                  cout<<a[i][j]<<" ";
            }
            cout<<"\n";
      }
      cout<<"The norm is "<<norm<<"\n";
      return 0;
}
