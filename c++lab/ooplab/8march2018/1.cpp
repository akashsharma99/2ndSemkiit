#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
class coordinate
{
private:
      int x,y;
public:
      void input()
      {
            cout<<"Enter x coordinate: ";
            cin>>x;
            cout<<"Enter y coordinate: ";
            cin>>y;
      }
      double operator +(coordinate &obj)
      {
            return sqrt(pow(abs(x-obj.x),2)+pow(abs(y-obj.y),2));
      }
};
int main()
{
      cout<<setw(20)<<"point 1"<<endl;
      coordinate ob1;
      ob1.input();
      cout<<setw(20)<<"point 2"<<endl;
      coordinate ob2;
      ob2.input();
      cout<<endl<<"Distance = "<<ob1+ob2<<endl;
      return 0;
}
