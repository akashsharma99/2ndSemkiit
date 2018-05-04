#include<iostream>
using namespace std;
int primeFactorise(int n,int d)
{
      if(n%d!=0)
            return n;
      return primeFactorise(n/d,d);
}
int main()
{
      int n,ug,i=1;
      cout<<"Enter n\n";
      cin>>n;
      int tem=n;
      for(i=1;n>0;i++)
      {
            ug=i;
            ug=primeFactorise(ug,2);
            ug=primeFactorise(ug,3);
            ug=primeFactorise(ug,5);
            if(ug==1)
            {
                  //cout<<i<<'\n';
                  n--;
            }
      }
      cout<<tem<<"th ugly number is "<<i-1<<'\n';
      return 0;
}
