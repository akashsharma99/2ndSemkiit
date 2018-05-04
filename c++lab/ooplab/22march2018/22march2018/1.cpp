#include<iostream>
using namespace std;
double divide(double a,double b)
{
  if(b==0)
  throw "Division by zero not possible";
  else
  return a/b;
}
int main()
{
  double x,y;
  cout<<"Enter numerator and denominator: ";
  cin>>x>>y;
  try{
      cout<<divide(x,y)<<endl;
  }
  catch(const char* e)
  {
    cerr<<e<<endl;
  }
  return 0;
}
