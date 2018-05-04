#include<iostream>
using namespace std;
void display(int n)
{
  if(n==0)
    throw "zero entered";
  else if(n<0)
    throw -999;
  cout<<n;
}
int main()
{
  int n;
  cout<<"Enter a number: ";
  cin>>n;
  try{
    display(n);
  }
  catch(const char* e)
  {
    cerr<<e<<endl;
  }
  /*catch(int e)
  {
    cerr<<e<<endl;
  }*/
  catch(...)
  {
    cerr<<"Bewakoof samjha hai program ko?"<<endl;
  }
  return 0;
}
