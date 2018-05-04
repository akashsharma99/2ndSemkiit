#include<iostream>
using namespace std;
int main()
{
      int* a;
      int n;
      cout<<"Enter size of array to be created"<<endl;
      cin>>n;
      a=new int[n];
      cout<<"Enter array elements"<<endl;
      for(int i=0;i<n;i++)
      {
            cin>>a[i];
      }
      cout<<"The entered array elements are"<<endl;
      for(int i=0;i<n;i++)
      {
            cout<<a[i]<<"  ";
      }
      return 0;
}
