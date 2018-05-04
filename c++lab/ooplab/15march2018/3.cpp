#include<iostream>
using namespace std;
class abstractClass
{
public:
	virtual void display()=0;
};
class A:public abstractClass
{
public:
	void display()
	{
		cout<<"Hello from class A!";
		return;
	}
};
class B:public abstractClass
{
public:
	void display()
	{
		cout<<"Hello from class B!";
		return;
	}
};
int main()
{
	A ob1;
	B ob2;
	ob1.display();
	ob2.display();
	return 0;
}
