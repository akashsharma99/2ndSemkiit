#include<string.h>
#include<iostream>
using namespace std;
int main()
{
      int i,j,n;
      cout<<"Enter number of names\n";
      cin>>n;
      string a[n];
      cout<<"Enter the names\n";
      cin.ignore();
      for(i=0;i<n;i++)
            getline(cin,a[i]);
      for(i=0;i<n;i++)
      {
            for(j=0;j<n-1-i;j++)
            {
                  if(a[j]>a[j+1])
                  {
                        a[j].swap(a[j+1]);
                  }
            }
      }
      cout<<"\nThe names are sorted now..\n\n";
      for(i=0;i<n;i++)
            cout<<a[i]<<"\n";
      return 0;
}
