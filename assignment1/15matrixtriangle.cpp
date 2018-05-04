#include<iostream>
using namespace std;
void upperTriangle(int** a,int n)
{
      int i,j;
      for(i=0;i<n;i++)
      {
            for(j=0;j<n;j++)
            {
                  if(j>=i)
                        cout<<a[i][j]<<"\t";
                  else
                        cout<<0<<"\t";
            }
            cout<<"\n";
      }
}
void lowerTriangle(int** a,int n)
{
      int i,j;
      for(i=0;i<n;i++)
      {
            for(j=0;j<n;j++)
            {
                  if(j<=i)
                        cout<<a[i][j]<<"\t";
                  else
                        cout<<0<<"\t";
            }
            cout<<"\n";
      }
}
int main()
{
      int i,j,size;
      cout<<"Enter side length of square matrix\n";
      cin>>size;
      int** a=(int**)calloc(size,sizeof(int*));
      cout<<"Enter the elements of the 2d matrix\n";
      for(i=0;i<size;i++)
      {
            a[i]=(int*)calloc(size,sizeof(int));
            for(j=0;j<size;j++)
            {
                  cin>>a[i][j];
            }
      }
      cout<<"You entered the following matrix\n";
      for(i=0;i<size;i++)
      {
            for(j=0;j<size;j++)
            {
                  cout<<a[i][j]<<"\t";
            }
            cout<<"\n";
      }
      cout<<"The upper triangle matrix is\n";
      upperTriangle(a,size);
      cout<<"The lower triangle matrix is\n";
      lowerTriangle(a,size);
      return 0;
}
