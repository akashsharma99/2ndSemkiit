#include<iostream>
using namespace std;
template<typename T>
class array
{
private:
  T* a;
  int size;
public:
  array(T* a,int size)
  {
    this->a=a;
    this->size=size;
  }
  void search(T key)
  {
    for(int i=0;i<size;i++)
    {
      if(a[i]==key)
      {
        cout<<"Element found at "<<i<<endl;
        return;
      }
    }
    cout<<"Element not found!"<<endl;
    return;
  }
  void avg()
  {

      T val=0;
      for(int i=0;i<size;i++)
      {
        val=val+a[i];
      }
      cout<<"The sum is: "<<val<<endl;
      cout<<"The average is: "<<val/size<<endl;
      return;
  }
  void maxmin()
  {
    T max=a[0];
    T min=max;
    for(int i=0;i<size;i++)
    {
      if(a[i]>max)
       max=a[i];
      if(a[i]<min)
       min=a[i];
    }
    cout<<"Largest is: "<<max<<endl;
    cout<<"Smallest is: "<<min<<endl;
    return;
  }
};
int main()
{
  int choice;
  int a[5]={5,2,9,6,23};
  array<int>obji(a,5);
  cout<<"1.search\n2.sum and average\n3.largest smallest\n";
  cin>>choice;
  switch(choice)
  {
    case 1: int ki;
            cout<<"Enter integer to search: ";
            cin>>ki;
            obji.search(ki);
            break;
    case 2: obji.avg();
    break;
    case 3: obji.maxmin();
    break;
    default: cout<<"Wrong choice"<<endl;
  }
  return 0;
}
