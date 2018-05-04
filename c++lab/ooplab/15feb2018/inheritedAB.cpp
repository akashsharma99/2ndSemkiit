#include<iostream>
using namespace std;
class A
{
	private:
	string name;
	public:
	void getName()
	{
		getline(cin,name);
		return;
	}
	void displayName()
	{
		cout<<name<<endl;
		return;
	}
};
class B:public A
{
	private:
	int roll;
	string branch;
	public:
	void inputDetails()
	{
		cout<<"Enter student name: ";
		getName();
		cout<<"Enter roll number: ";
		cin>>roll;
		cin.ignore();
		cout<<"Enter branch: ";
		getline(cin,branch);
		return;
	}
	void displayDetails()
	{
		cout<<"Student name: ";
		displayName();
		cout<<"Roll: "<<roll<<endl;
		cout<<"Branch: "<<branch<<endl;
		return;
	}
};
int main()
{
	B obj;
	cout<<"INPUT DETAILS-------"<<endl;
	obj.inputDetails();
	cout<<"OUTPUT DETAILS------"<<endl;
	obj.displayDetails();
	return 0;
}
	
