#include<iostream>
using namespace std;
int main()
{
      long i,j,n,t;
      cout<<"Enter size of array\n";
      cin>>n;
      int* a=(int*)calloc(n,sizeof(int));
      cout<<"Enter elements of array\n";
      for(i=0;i<n;i++)
      {
            cin>>a[i];
      }
      //direct approach
      for(i=0;i<n;i+=2)
      {
            if(i>0&&a[i]<a[i-1])
            {
                  t=a[i];
                  a[i]=a[i-1];
                  a[i-1]=t;
            }
            if(i<n-1&&a[i]<a[i+1])
            {
                  t=a[i];
                  a[i]=a[i+1];
                  a[i+1]=t;
            }
      }
/*      //sorting array in ascending order method
      for(i=0;i<n;i++)
      {
            for(j=0;j<n-i-1;j++)
            {
                  if(a[j]>a[j+1])
                  {
                        t=a[j];
                        a[j]=a[j+1];
                        a[j+1]=t;
                  }
            }
      }
      for(i=1;i<n;i+=2)
      {
            t=a[i];
            a[i]=a[i-1];
            a[i-1]=t;
      }
*/
      //printing array wave
      for(i=0;i<n;i++)
            cout<<a[i]<<" ";
      cout<<"\n";
      return 0;
}
