#include<iostream>
using namespace std;
int main()
{
      int n1,n2,flag=0;
      cout<<"Enter size of 1st array\n";
      cin>>n1;
      int* a=(int*)calloc(n1,sizeof(int));
      cout<<"Enter array elements\n";
      for(int i=0;i<n1;i++)
            cin>>a[i];
      cout<<"Enter size of 2nd array\n";
      cin>>n2;
      int* b=(int*)calloc(n2,sizeof(int));
      cout<<"Enter array elements\n";
      for(int i=0;i<n2;i++)
            cin>>b[i];
      if(n1!=n2)
      {
            cout<<"Unequal arrays since different lengths\n";
            return 0;
      }
      for(int i=0;i<n1;i++)
      {
            for(int j=0;j<n1-1-i;j++)
            {
                  int t;
                  if(a[j]>a[j+1])
                  {
                        t=a[j];
                        a[j]=a[j+1];
                        a[j+1]=t;
                  }
                  if(b[j]>b[j+1])
                  {
                        t=b[j];
                        b[j]=b[j+1];
                        b[j+1]=t;
                  }
            }
      }
      for(int i=0;i<n1;i++)
      {
            if(a[i]!=b[i])
                  flag=1;
      }
      if(flag==1)
            cout<<"Unequal arrays\n";
      else
            cout<<"Equal arrays\n";
      return 0;
}
