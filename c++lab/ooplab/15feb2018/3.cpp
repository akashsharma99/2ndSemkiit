#include<iostream>
using namespace std;
class person
{
private:
      string name,gender;
      int age;
public:
      void getDetails()
      {
            cout<<"Enter name: ";
            getline(cin,name);
            cout<<"Enter gender: ";
            getline(cin,gender);
            cout<<"Enter age: ";
            cin>>age;
            cin.ignore();
            return;
      }
      void display()
      {
            cout<<"Name: "<<name<<endl;
            cout<<"Gender: "<<gender<<endl;
            cout<<"Age: "<<age<<endl;
            return;
      }
};
class employee:public person
{
private:
      string company;
      int empID;
public:
      void getDetails()
      {
            person::getDetails();
            cout<<"Enter company name: ";
            getline(cin,company);
            cout<<"Enter employee ID: ";
            cin>>empID;
            cin.ignore();
            return;
      }
      void display()
      {
            person::display();
            cout<<"Company: "<<company<<endl;
            cout<<"Employee ID: "<<empID<<endl;
            return;
      }
};
class programmer:public employee
{
private:
      int number;
public:
      void getDetails()
      {
            employee::getDetails();
            cout<<"How many programming languages known? ";
            cin>>number;
            cin.ignore();
            return;
      }
      void display()
      {
            employee::display();
            cout<<"Number of programming languages known: "<<number<<endl;
            return;
      }
};
int main()
{
      programmer dev1,dev2;
      cout<<"Enter details of 1st programmer....."<<endl;
      dev1.getDetails();
      cout<<"Enter details of 2nd programmer....."<<endl;
      dev2.getDetails();
      cout<<endl<<endl;
      cout<<"Details of the programmers are----"<<endl;
      cout<<"Programmer 1:- "<<endl;
      dev1.display();
      cout<<"Programmer 2:- "<<endl;
      dev2.display();
      return 0;
}
