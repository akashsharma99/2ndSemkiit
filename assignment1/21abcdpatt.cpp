#include<iostream>
using namespace std;
int main()
{
      char i,j,n;
      cout<<"Enter a alphabet\n";
      cin>>n;
      if(n>='a'&&n<='z')
            n=n-32;
      else if(n<'A'||n>'z'||(n>'Z'&&n<'a'))
      {
            cout<<"This is not an english alphabet\n";
            return 0;
      }
      for(i='A';i<=n;i++)
      {
            for(j='A';j<=i;j++)
                  cout<<j;
            cout<<"\n";
      }
      return 0;
}
