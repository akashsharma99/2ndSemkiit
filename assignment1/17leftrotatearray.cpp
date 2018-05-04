#include<iostream>
using namespace std;
void leftRotate(int ar[],int d,int n)
{
      int i,j,tem;
      for(i=0;i<d;i++)
      {
            for(j=1;j<n;j++)
            {
                  tem=ar[j];
                  ar[j]=ar[j-1];
                  ar[j-1]=tem;
            }
      }
}
int main()
{
      int size,rot,i;
      cout<<"Enter size of 1D array\n";
      cin>>size;
      int* a=(int*)calloc(size,sizeof(int));
      cout<<"Enter the numbers in the array\n";
      for(i=0;i<size;i++)
      {
            cin>>a[i];
      }
      cout<<"Original array\n";
      for(i=0;i<size;i++)
            cout<<a[i]<<"  ";
      cout<<"\nEnter rotate value\n";
      cin>>rot;
      leftRotate(a,rot,size);
      //printing the rotated array
      cout<<"The rotated array is...\n";
      for(i=0;i<size;i++)
            cout<<a[i]<<"\n";
      return 0;
}
