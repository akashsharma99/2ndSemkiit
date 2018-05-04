#include<iostream>
using namespace std;
class Student
{
private:
      string name;
      int rollno;
public:
      void input()
      {
            cout<<"Enter name: ";
            getline(cin,name);
            cout<<"Enter rollno: ";
            cin>>rollno;
            return;
      }
      void display()
      {
            cout<<"Name : "<<name<<endl;
            cout<<"Roll no : "<<rollno<<endl;
            return;
      }
};
class Marks:virtual public Student
{
private:
      int m1,m2,m3;
public:
      void input()
      {
            cout<<"Enter marks in 3 subjects: ";
            cin>>m1>>m2>>m3;
            cin.ignore();
            return;
      }
      int getTotal()
      {
            return m1+m2+m3;
      }
      void display()
      {
            cout<<"Marks: "<<m1<<','<<m2<<','<<m3<<endl;
            return;
      }
};
class Sports:virtual public Student
{
private:
      string grade;
public:
      void input()
      {
            cout<<"Enter Grade in sports: ";
            getline(cin,grade);
            return;
      }
      void display()
      {
            cout<<"Sports Grade: "<<grade<<endl;
            return;
      }
};
class SResults:public Sports,public Marks
{
private:
      int total;
      double percentage;
public:
      void getInput()
      {
            Student::input();
            Marks::input();
            Sports::input();
            total=getTotal();
            percentage=total/3;
            return;
      }
      void display()
      {
            Student::display();
            Marks::display();
            Sports::display();
            cout<<"Total : "<<total<<endl;
            cout<<"Percentage : "<<percentage<<endl;
            return;
      }
};

int main()
{
      SResults obj;
      obj.getInput();
      obj.display();
      return 0;
}
