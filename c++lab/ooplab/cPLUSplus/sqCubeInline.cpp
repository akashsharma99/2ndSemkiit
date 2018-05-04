#include<iostream>
using namespace std;
inline float square(float x)
{
      return x*x;
}
inline float cube(float x)
{
      return x*x*x;
}
int main()
{
      float n;
      cout<<"Enter a number\n";
      cin>>n;
      cout<<"The square is = "<<square(n)<<endl;
      cout<<"The cube is = "<<cube(n)<<endl;
      return 0;
}
