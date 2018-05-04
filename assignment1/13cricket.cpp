#include<iostream>
#include<string>
using namespace std;
struct player
{
      string name;
      int age;
      int testp;
      int avg;
};
int main()
{
      struct player p[20];
      int n=5;
      cout<<"Reading the records of 20 cricketers\n";
      for(int i=0;i<n;i++)
      {
            cout<<"\nEnter details of player "<<i+1<<'\n';
            cout<<"Name : ";
            getline(cin,p[i].name);
            cout<<"Age : ";
            cin>>p[i].age;
            cout<<"Number of test matches played : ";
            cin>>p[i].testp;
            cout<<"Batting average : ";
            cin>>p[i].avg;
            cin.ignore();
      }
      for(int i=0;i<n;i++)
      {
            for(int j=0;j<n-1-i;j++)
            {
                  if(p[j].avg>p[j+1].avg)
                  {
                        int t=p[j].avg;
                        p[j].avg=p[j+1].avg;
                        p[j+1].avg=t;

                        p[j].name.swap(p[j+1].name);

                        int a=p[j].age;
                        p[j].age=p[j+1].age;
                        p[j+1].age=a;

                        int tes=p[j].testp;
                        p[j].testp=p[j+1].testp;
                        p[j+1].testp=tes;
                  }
            }
      }
      cout<<"\nThe records in ascending order of average runs are..\n\n";
      cout<<"AvgRuns\tMatches\tAge\tName\n\n";
      for(int i=0;i<n;i++)
      {
            cout<<p[i].avg<<'\t'<<p[i].testp<<'\t'<<p[i].age<<'\t'<<p[i].name<<'\n';
      }
      return 0;
}
