#include<iostream>
#include<malloc.h>
using namespace std;
void multiply(int** a,int m,int n,int** b,int q,int** c)
{
      static int i=0,j=0,k=0;
      if(i>=m)
            return;
      if(j<q)
      {
            if(k<n)
            {
                  c[i][j]=c[i][j]+a[i][k]*b[k][j];
                  k++;
                  multiply(a,m,n,b,q,c);
            }
            k=0;
            j++;
            multiply(a,m,n,b,q,c);
      }
      j=0;
      i++;
      multiply(a,m,n,b,q,c);
}
int main()
{
      int m1,n1,m2,n2,i,j;
      cout<<"Enter number of rows of 1st matrix\n";
      cin>>m1;
      cout<<"Enter number of columns of 1st matrix\n";
      cin>>n1;
      cout<<"Enter number of rows of 2nd matrix\n";
      cin>>m2;
      cout<<"Enter number of columns of 2nd matrix\n";
      cin>>n2;
      if(n1!=m2)
      {
            cout<<"Matrix multiplication is not possible\n";
            return 0;
      }
      else
      {
            int** a=(int**)calloc(m1,sizeof(int*));
            cout<<"Enter elements of 1st matrix\n";
            for(i=0;i<m1;i++)
            {
                  a[i]=(int*)calloc(n1,sizeof(int));
                  for(j=0;j<n1;j++)
                  {
                        cin>>a[i][j];
                  }
            }
            int** b=(int**)calloc(m2,sizeof(int*));
            cout<<"Enter elements of 2nd matrix\n";
            for(i=0;i<m2;i++)
            {
                  b[i]=(int*)calloc(n2,sizeof(int));
                  for(j=0;j<n2;j++)
                  {
                        cin>>b[i][j];
                  }
            }
            int** c=(int**)calloc(m1,sizeof(int*));
            for(i=0;i<m1;i++)
            {
                 c[i]=(int*)calloc(n2,sizeof(int));
                 for(j=0;j<n2;j++)
                 	c[i][j]=0;
            }
            multiply(a,m1,n1,b,n2,c);
            //displaying result
            cout<<"The result of multiplication is\n";
            for(i=0;i<m1;i++)
            {
                  for(j=0;j<n2;j++)
                  {
                        cout<<c[i][j]<<"\t";
                  }
                  cout<<"\n";
            }
      }
      return 0;
}
