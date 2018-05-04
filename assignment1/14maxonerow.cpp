#include<iostream>
using namespace std;
int sort2D(int** a,int m,int n)
{
      int high=0,c=0,i,j,k,index=0;
      for(i=0;i<m;i++)
      {
            for(j=0;j<n;j++)
            {
                  for(k=0;k<n-j-1;k++)
                  {
                        if(a[i][k]==1&&a[i][k+1]==0)
                        {
                              a[i][k]=0;
                              a[i][k+1]=1;
                        }
                  }
            }
            c=0;
            for(j=n-1;j>=0;j--)
            {
                  if(a[i][j]==0)
                   break;
                  c++;
            }
            if(c>high)
            {
                  high=c;
                  index=i;
            }
      }
      return index;
}
void display2D(int** a,int m,int n)
{
      int i,j;
      for(i=0;i<m;i++)
      {
            for(j=0;j<n;j++)
                  cout<<a[i][j];
            cout<<"\n";
      }
}
int main()
{
      int r,c,i,j;
      cout<<"Enter number of rows\n";
      cin>>r;
      cout<<"Enter number of columns\n";
      cin>>c;
      int** a=(int**)calloc(r,sizeof(int*));
      for(i=0;i<r;i++)
            a[i]=(int*)calloc(c,sizeof(int));
      cout<<"Enter the elements of the array(only 0 and 1 accepted)\n";
      for(i=0;i<r;i++)
      {
            for(j=0;j<c;j++)
            {
                  cin>>a[i][j];
                  if(a[i][j]!=0 && a[i][j]!=1)
                  {
                        cout<<"enter 0 or 1\n";
                        j--;
                  }
            }
      }
      cout<<"The input matrix is\n";
      display2D(a,r,c);
      int max=sort2D(a,r,c);
      cout<<"The sorted matrix is\n";
      display2D(a,r,c);
      cout<<"Index of row having most 1's is "<<max<<"\n";
      return 0;
}
