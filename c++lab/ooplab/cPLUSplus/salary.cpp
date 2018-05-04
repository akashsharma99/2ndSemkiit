#include<iostream>
#include<string>
using namespace std;
class employee
{
	private:
		int id,age;
		float basic;
		string name;
	public:
		void getInput()
		{
			cin.ignore();
			cout<<"Enter name : ";
			getline(cin,name);
			cout<<"Enter ID : ";
			cin>>id;
			cout<<"Enter Age : ";
			cin>>age;
			cout<<"Enter basic pay : ";
			cin>>basic;
			return;
		}
		float getGrossPay()
		{
			return basic+(0.8*basic)+(0.1*basic);
		}
		void display()
		{
			cout<<name<<"\t"<<id<<"\t"<<age<<"\t"<<basic<<"\t"<<(0.8*basic)<<"\t"<<(0.1*basic)<<"\t"<<getGrossPay()<<endl;
			return;
		}
};
int main()
{
	int n;
	cout<<"How many employees?"<<endl;
	cin>>n;
	employee emp[n];
	for(int i=0;i<n;i++)
	{
		cout<<"Employee "<<i+1<<endl;
		cout<<"-----------------------"<<endl;
		emp[i].getInput();
		cout<<"-----------------------"<<endl;
	}
	cout<<"The employee details in record are:-"<<endl;
	cout<<"------------------------------------------------------------------------------------------------"<<endl;
	cout<<"NAME\tID\tAGE\tBASIC\tDA\tHRA\tGROSS"<<endl;
	for(int i=0;i<n;i++)
	{
		emp[i].display();
	}
	return 0;
}
