#include <iostream>
#include<time.h>
using namespace std;
int main()
{     srand(time(0));
      int a[100];
      int five=0,odd=0,small,high=0,pos=0,i;
      for(i=0;i<100;i++)
      {
            a[i]=rand()%100+1;
            cout<<a[i]<<"\n";
      }
      small=a[0];
      cout<<"An array of 100 random integers is ready.\n";
      for(i=0;i<100;i++)
      {
            if(a[i]<small)
            {
                  small=a[i];
            }
            if(a[i]>high)
            {
                  high=a[i];
                  pos=i;
            }
            if(a[i]%2!=0)
            {
                  odd++;
            }
            if(a[i]%5==0)
            {
                  five++;
            }
      }
      cout<<"Number of elements completely divisible by 5 = "<<five<<"\n";
      cout<<"Number of odd elements = "<<odd<<"\n";
      cout<<"Smallest element in the array = "<<small<<"\n";
      cout<<"Position of largest value = "<<pos<<"\n";
      return 0;
}
