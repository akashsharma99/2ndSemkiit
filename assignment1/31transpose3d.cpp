#include<iostream>
using namespace std;
int main()
{
      int n;
      cout<<"Enter side length of 3d matrix\n";
      cin>>n;
      int*** a=(int***)calloc(n,sizeof(int**));
      for(int i=0;i<n;i++)
      {
            a[i]=(int**)calloc(n,sizeof(int*));
            for(int j=0;j<n;j++)
            {
                  a[i][j]=(int*)calloc(n,sizeof(int));
            }
      }
      for(int i=0;i<n;i++)
      {
            cout<<"Enter elements of layer "<<i<<"\n";
            for(int j=0;j<n;j++)
            {
                  for(int k=0;k<n;k++)
                        cin>>a[i][j][k];
            }
      }
      //transposing
      int m=(n%2==0)?n/2:(n/2)+1;
      for(int i=0;i<m;i++)
      {
            for(int j=0;j<n;j++)
            {
                  for(int k=0;k<n;k++)
                  {
                        int t=a[i][j][k];
                        a[i][j][k]=a[n-1-i][n-1-j][n-1-k];
                        a[n-1-i][n-1-j][n-1-k]=t;
                  }
            }
      }
      //printing
      cout <<"\nthe transposed matrix is\n";
      for(int i=0;i<n;i++)
      {
            cout<<"elements of layer "<<i<<"\n";
            for(int j=0;j<n;j++)
            {
                  for(int k=0;k<n;k++)
                        cout<<a[i][j][k]<<"\t";
                  cout<<"\n";
            }
      }
      return 0;
}
