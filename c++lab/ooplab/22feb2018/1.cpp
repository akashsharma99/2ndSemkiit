#include<iostream>
using namespace std;
class arithmatic
{
protected:
	int *a;
	int lt;
public:
	void input()
	{
		a=new int[lt];
		for(int i=0;i<lt;i++)
		{
			cin>>a[i];
		}
	}
	void display()
	{
		for(int i=0;i<lt;i++)
		{
			cout<<a[i];
		}
	}
};
class Plus:public arithmatic
{
protected:
	int sum;
public:
	void getSum(int l)
	{

		sum=0;arithmatic::lt=l;
		input();
		for(int i=0;i<l;i++)
		{
			sum=sum+a[i];
		}
		return;
	}
};
class New
{
protected:
	int p;
public:
	void input()
	{
		cout<<"Enter value of P: ";
		cin>>p;
		return;
	}
};
class result:public Plus,public New
{
public:
	void getResult()
	{
		cout<<"Enter size of array: ";
		cin>>lt;
		getSum(lt);
		New::input();
		cout<<"Result is = "<<sum<<'+'<<p<<'='<<sum+p<<endl;
		return;
	}
};
int main()
{
	result obj;
	obj.getResult();
	return 0;
}
