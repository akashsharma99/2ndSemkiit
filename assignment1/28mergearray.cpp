#include<iostream>
using namespace std;
int main()
{
      int n1,n2;
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
      int* c=(int*)calloc(n1+n2,sizeof(int));
      int k=0;
      for(int i=0;i<n1+n2;i++)
      {
            if(i<n1)
                  c[i]=a[i];
            else
                  c[i]=b[k++];
      }
      //now sorting the merged array
      for(int i=0;i<n1+n2;i++)
      {
            for(int j=0;j<n1+n2-1-i;j++)
            {
                  if(c[j]>c[j+1])
                  {
                        int t=c[j];
                        c[j]=c[j+1];
                        c[j+1]=t;
                  }
            }
      }
      //printing the merged array
      for(int i=0;i<n1+n2;i++)
            cout<<c[i];
      cout<<'\n';
      return 0;
}
