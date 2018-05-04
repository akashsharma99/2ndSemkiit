#include<iostream>
using namespace std;
class hello
{
private:
      int num;
public:
      friend istream& operator >>(istream &inp,hello &obj)
      {
            inp>>obj.num;
            return inp;
      }
      friend ostream& operator <<(ostream &op,hello &obj)
      {
            op<<obj.num;
            return op;
      }
};
int main()
{
      hello obj;
      cout<<"Enter a number: ";
      cin>>obj;
      cout<<"The entered number is: "<<obj<<endl;
      return 0;
}
