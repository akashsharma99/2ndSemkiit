#include<iostream>
using namespace std;
int F(int m,int n)
{
      if(m==0 || (m>=n && n>=1))
       return 1;
      return F(m,n-1)+F(m-1,n-1);
}
int main()
{
      int m,n;
      cout<<"Enter 1st number m\n";
      cin>>m;
      cout<<"Enter 2nd number n\n";
      cin>>n;
      cout<<"Result of operation is "<<F(m,n)<<'\n';
      return 0;
}
