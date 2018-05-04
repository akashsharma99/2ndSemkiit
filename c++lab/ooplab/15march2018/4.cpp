#include<iostream>
using namespace std;
class employee
{
private:
	int empID;
	int skill;
	int hours;
	int salary;
public:
	void input()
	{
		cout<<"Enter emloyee ID: ";
		cin>>empID;
		cout<<"Enter hours worked: ";
		cin>>hours;
		cout<<"Enter skill rating: (1.least skilled & 3.most skilled)"<<endl;
		cin>>skill;
		switch(skill)
		{
			case 1:salary=hours*100;
				break;
			case 2:salary=hours*150;
				break;
			case 3:salary=hours*200;
				break;
			default: cout<<"Wrong input"<<endl;
		}
	}
	void display()
	{
		cout<<"EmployeeID: "<<empID<<endl;
		cout<<"Skill: "<<skill<<endl;
		cout<<"Hours worked: "<<hours<<endl;
		cout<<"Salay: Rs."<<salary<<endl;
		return;
	}
};
int main()
{
	int noe;
	cout<<"How many employees? ";
	cin>>noe;
	employee *ptr=new employee[noe];
	for(int i=0;i<noe;i++)
	{
		cout<<"\tEmployee "<<i+1<<endl;
		ptr[i].input();
	}
	cout<<endl<<"The employee details are"<<endl;
	for(int i=0;i<noe;i++)
	{
		cout<<"\tEmployee "<<i+1<<endl;
		ptr[i].display();
	}
	return 0;
}
