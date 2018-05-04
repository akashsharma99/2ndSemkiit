#include<iostream>
#include<math.h>
using namespace std;
float facto(int f)
{
      if(f==0)
            return 1;
      return f*facto(f-1);
}
float series(int n,float x)
{
      if(n==1)
            return x;
      return pow(x,n)/facto(n)+series(n-2,x);
}
int main()
{
      int n;
      float s,x;
      cout<<"Enter value of x\n";
      cin>>x;
      cout<<"Enter value of n\n";
      cin>>n;
      if(n>0)
      {
            if(n%2==0)
                  n-=1;
            s=series(n,x);
            cout<<"The series sum is "<<s<<"\n";
      }
      else
            cout<<"Wrong input...n cannot be 0\n";
      return 0;
}
