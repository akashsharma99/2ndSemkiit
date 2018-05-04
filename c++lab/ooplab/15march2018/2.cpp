#include<iostream>
using namespace std;
class base
{
public:
	virtual void display()
	{
		cout<<"Hello from Base!"<<endl;
	}
};
class derived:public base
{
public:
	void display()
	{
		cout<<"Hello from Derived!"<<endl;
	}
};
int main()
{
	base *bptr;
	derived obj;
	bptr=&obj;
	bptr->display();
	return 0;
}
