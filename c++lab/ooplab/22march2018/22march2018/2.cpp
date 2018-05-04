#include<iostream>
using namespace std;
int main()
{
  int *a=new int[5];
  int *n;
  n=new int;
  cout<<"Enter size of array: ";
  cin>>*n;
  try{
    cout<<"Enter elements of array: ";
    for(int i=0;i<*n;i++)
    {
      if(i>=5)
       throw "Array index out of bounds!";
      cin>>a[i];
    }
    cout<<"The entered numbers are: ";
    for(int i=0;i<*n;i++)
    {
      if(i>=5)
        throw "Array index out of bounds!";
      cout>>a[i];
    }
  }
  catch(const char* e)
  {
    cerr<<e;
  }
  return 0;
}
