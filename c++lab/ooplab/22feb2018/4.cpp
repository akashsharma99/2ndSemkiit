#include<iostream>
using namespace std;
class plate
{
private:
	int length,breadth;
public:
	plate(int l,int b)
	{
		length=l;
		breadth=b;
		cout<<"plate contructed"<<endl;
	}
	~plate()
	{
		cout<<"Plate destructed"<<endl;
	}
};
class box:public plate
{
private:
	int height;
public:
	box(int l,int b,int h):plate(l,b)
	{
		height=h;
		cout<<"Box constructed"<<endl;
	}
	~box()
	{
		cout<<"Box destroyed"<<endl;
	}
};
class woodBox:public box
{
private:
	int thick;
public:
	woodBox(int l,int b,int h,int t):box(l,b,h)
	{
		thick=t;
		cout<<"woodBox constructed"<<endl;
	}
	~woodBox()
	{
		cout<<"woodBox destroyed"<<endl;
	}
};

int main()
{
	int l,b,h,t;
	cout<<"Enter length,breadth,height and thickness"<<endl;
	cin>>l>>b>>h>>t;
	woodBox obj(l,b,h,t);
	return 0;
}
