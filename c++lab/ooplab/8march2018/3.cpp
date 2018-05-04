#include<iostream>
using namespace std;
class stock
{
private:
      int bill_number;
public:
      void operator ++()
      {
            bill_number+=1;
            return;
      }
      void operator --()
      {
            bill_number-=1;
            return;
      }
      void inputBill()
      {
            cout<<"Enter Bill Number: ";
            cin>>bill_number;
            return;
      }
      void displayBill()
      {
            cout<<"Bill Number: "<<bill_number<<endl;
            return;
      }
};
int main()
{
      stock obj;
      char c;
      obj.inputBill();
      do{
            cout<<"'I' for increase"<<endl<<"'D' for decrease"<<endl<<"anything else for exit"<<endl;
            cin>>c;
            if(c=='I'||c=='i')
            ++obj;
            else if(c=='D'||c=='d')
            --obj;
            else
            break;
      }while(1);
      cout<<endl;
      obj.displayBill();
      return 0;
}
