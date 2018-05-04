#include<iostream>
using namespace std;
class student
{
private:
	int roll;
	string course;
public:
	void read()
	{
		cout<<"Roll: ";
		cin>>roll;
		cin.ignore();
		cout<<"Course: ";
		getline(cin,course);
		return;
	}
	void display()
	{
		cout<<"Roll: "<<roll<<endl;
		cout<<"Course: "<<course<<endl;
		return;
	}
};
class result:private student
{
private:
	student *studs;
	int *marks;
public:
	int read()
	{
		int total=0;
		marks=new int[3];
		studs=new student[3];
		cout<<"Enter details of 3 students."<<endl;
		for(int i=0;i<3;i++)
		{
			cout<<"\t\tStudent "<<i+1<<endl;
			studs[i].read();
			cout<<"Marks: ";
			cin>>marks[i];
			total=total+marks[i];
		}
		return total;
	}
	void display()
	{
		int x=read();
		cout<<"The entered details are: "<<endl;
		for(int i=0;i<3;i++)
		{
			cout<<"Student "<<i+1<<endl;
			studs[i].display();
			cout<<"Marks: "<<marks[i]<<endl;
		}
		cout<<endl<<"Total marks = "<<x<<endl;
		return;
	}
};
int main()
{
	result obj;
	obj.display();
	return 0;
}
