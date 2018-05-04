#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
class coordinate
{
private:
      int x,y;
      double dist;
public:
      void input()
      {
            cout<<"Enter x coordinate: ";
            cin>>x;
            cout<<"Enter y coordinate: ";
            cin>>y;
      }
      double getDist()
      {
            return dist;
      }
      void operator +=(coordinate &obj)
      {
            dist=sqrt(pow(abs(x-obj.x),2)+pow(abs(y-obj.y),2));
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
      ob1+=ob2;
      cout<<endl<<"Distance = "<<ob1.getDist()<<endl;
      return 0;
}
