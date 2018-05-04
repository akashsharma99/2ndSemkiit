#include<iostream>
#include<math.h>
using namespace std;
int main()
{
      int x1,x2,y1,y2,i=2;
      float d=0.0;
      cout<<"Enter x coordinate of point 1\n";
      cin>>x1;
      cout<<"Enter y coordinate of point 1\n";
      cin>>y1;
      while(i<=10)
      {
            cout<<"\nEnter x coordinate of point "<<i<<"\n";
            cin>>x2;
            cout<<"Enter y coordinate of point "<<i<<"\n";
            cin>>y2;
            d=d+sqrt(pow(x2-x1,2)+pow(y2-y1,2));
            x1=x2;
            y1=y2;
            i++;
      }
      cout<<"The sum of distances between consecutive points is "<<d<<"\n";
      return 0;
}
