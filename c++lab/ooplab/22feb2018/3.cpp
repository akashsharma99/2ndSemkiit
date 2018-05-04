#include<iostream>
using namespace std;
class base
{
private:
	int n;
public:
	void input()
	{
		cout<<"Enter number for base class: ";
		cin>>n;
		return;
	}
	void display()
	{
		cout<<"The number for base is: "<<n<<endl;
		return;
	}
};
class derived:public base
{
private:
	int n;
public:
	void input()
	{
		base::input();
		cout<<"Enter number for derived: ";
		cin>>n;
		return;
	}
	void display()
	{	base::display();
		cout<<"The number for derived is: "<<n<<endl;
		return;
	}
};
int main()
{
	derived obj;
	obj.input();
	obj.display();
	return 0;
}
