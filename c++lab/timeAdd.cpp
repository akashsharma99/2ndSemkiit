#include<iostream>
using namespace std;
class time
{
      private:
            int hours,minutes;
      public:
            time add(time);
            void getTime();
            void displayTime();
};
time time::add(time a)
{
      a.minutes=a.minutes+60*a.hours;
      minutes=minutes+60*hours;
      time obj;
      obj.minutes=minutes+a.minutes;
      obj.hours=obj.minutes/60;
      obj.minutes=obj.minutes%60;
      return obj;
}
void time::getTime()
{
      cout<<"Enter hours: ";
      cin>>hours;
      cout<<"Enter minutes: ";
      cin>>minutes;
      return;
}
void time::displayTime()
{
      cout<<hours<<" hours "<<minutes<<" minutes"<<endl;
      return;
}
int main()
{
      cout<<"Enter the times in hours and minutes"<<endl;
      cout<<"Time 1 - "<<endl;
      time t1;
      t1.getTime();
      cout<<"Time 2 - "<<endl;
      time t2;
      t2.getTime();
      time t3;
      t3=t1.add(t2);
      cout<<"The resultant after addition is : ";
      t3.displayTime();
      return 0;
}
