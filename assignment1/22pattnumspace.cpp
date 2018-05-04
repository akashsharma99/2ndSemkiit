#include<iostream>
using namespace std;
int main()
{
      int i,j,sp,n;
      cout<<"Enter a number\n";
      cin>>n;
      for(i=1;i<=n;i++)
      {
            for(sp=n-1;sp>=i;sp--)
                  cout<<" ";
            for(j=1;j<=i;j++)
                  cout<<i<<" ";
            cout<<"\n";
      }
      return 0;
}
