#include<iostream>
using namespace std;
class units
{
private:
      double milli;
public:
      units()
      {
            milli=0;
      }
      inline double getKilometers();
      inline double getMeter();
      inline double getCentimeter();
      void inputDistance();
};
inline double units::getKilometers()
{
      return milli/1000000;
}
inline double units::getMeter()
{
      return milli/1000;
}
inline double units::getCentimeter()
{
      return milli/10;
}
void units::inputDistance()
{
      cin>>milli;
      return;
}
int main()
{
      units d;
      cout<<"Enter a distance in millimeters: ";
      d.inputDistance();
      cout<<"Converted values are-----"<<endl;
      cout<<d.getKilometers()<<" Km"<<endl;
      cout<<d.getCentimeter()<<" cm"<<endl;
      cout<<d.getMeter()<<" m"<<endl;
      return 0;
}
