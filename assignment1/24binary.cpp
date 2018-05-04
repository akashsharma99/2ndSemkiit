#include<iostream>
using namespace std;
void dispBinary(int n)
{
      if(n==0)
            return;
      dispBinary(n/2);
      cout<<n%2;
}
int main()
{
      int deci;
      cout<<"Enter a decimal number\n";
      cin>>deci;
      cout<<"The binary equivalent is\n";
      if(deci==0)
            cout<<0;
      else
            dispBinary(deci);
      return 0;
}
