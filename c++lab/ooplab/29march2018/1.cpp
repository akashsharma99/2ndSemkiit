#include<iostream>
using namespace std;
template<typename T>
void swapper(T& a,T& b)
{
  T temp;
  temp=a;
  a=b;
  b=temp;
  return;
}
int main()
{
  int a,b;
  char m,n;
  float i,j;
  cout<<"Enter two floats:"<<endl;
  cin>>i>>j;
  cout<<"Enter two integers:"<<endl;
  cin>>a>>b;
  cout<<"Enter two characters:"<<endl;
  cin>>m>>n;
  swapper<int>(a,b);
  swapper<float>(i,j);
  swapper<char>(m,n);
  cout<<"The swapped integers are: "<<a<<","<<b<<endl;
  cout<<"The swapped floats are: "<<i<<","<<j<<endl;
  cout<<"The swapped characters are: "<<m<<","<<n<<endl;
  return 0;
}
