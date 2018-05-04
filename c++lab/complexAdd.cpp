#include<iostream>
using namespace std;
class complex
{
private:
      double real,imag;
public:
      void getNumber();
      void displayNumber();
      complex add(complex);
};
void complex::getNumber()
{
      cout<<"Real: ";
      cin>>this->real;
      cout<<"Imaginary: ";
      cin>>this->imag;
      return;
}
void complex::displayNumber()
{
      if(this->imag>0)
      cout<<this->real<<'+'<<this->imag<<'i'<<endl;
      else
      cout<<this->real<<this->imag<<'i'<<endl;
      return;
}
complex complex::add(complex b)
{
      this->imag=this->imag+b.imag;
      this->real=this->real+b.real;
      return *this;
}
int main()
{
      complex num1,num2,num3;
      cout<<"Enter 1st complex number - "<<endl;
      num1.getNumber();
      cout<<"Enter 2nd complex number - "<<endl;
      num2.getNumber();
      num3=num1.add(num2);
      cout<<"The summation is: ";
      num3.displayNumber();
      return 0;
}
