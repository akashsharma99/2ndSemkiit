#include<iostream>
using namespace std;
int main()
{
      int i,j,k,s,n,high;
      cout<<"Enter length of array\n";
      cin>>n;
      int* a=(int*)calloc(n,sizeof(int));
      cout<<"Enter elements of array\n";
      for(i=0;i<n;i++)
      {
            cin>>a[i];
      }
      high=a[0];
      for(i=0;i<n;i++)
      {
            for(j=i;j<n;j++)
            {
                  s=0;
                  for(k=i;k<j;k++)
                  {
                        s=s+a[k];
                  }
                  if(s>high)
                        high=s;
            }
      }
      cout<<"The largest sum of contiguous sub array is "<<high<<"\n";
      return 0;
}
