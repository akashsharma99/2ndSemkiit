#include<iostream>
#include<cmath>
using namespace std;
float area(int r)//area of circle
{
	return 3.1415926*r*r;
}
float area(int l,int b)//rectangle
{
	return l*b;
}
float area(int a,int b,int c)//triangle
{
	float s=(a+b+c)/2;
	return sqrt(s*abs((s-a))*abs((s-b))*abs((s-c)));
}
int main()
{
	int ch;
	cout<<"Enter your choice of shape\n";
	cout<<"1.circle\n2.rectangle\n3.triangle\n";
	cin>>ch;
	switch(ch)
	{
		case 1: cout<<"Enter radius\n";
			int rad;
			cin>>rad;
			cout<<"Area of circle is: "<<area(rad)<<'\n';
			break;
		case 2: cout<<"Enter length of rectangle\n";
			int lt;
			cin>>lt;
			cout<<"Enter breadth of rectangle\n";
			int bt;
			cin>>bt;
			cout<<"Area of rectangle is: "<<area(lt,bt)<<'\n';
			break;
		case 3: cout<<"Enter length of 1st side\n";
			int aa;cin>>aa;
			cout<<"Enter length of 2nd side\n";
			int bb;cin>>bb;
			cout<<"Enter length of 3rd side\n";
			int cc;cin>>cc;
			cout<<"Area of triangle is: "<<area(aa,bb,cc)<<'\n';
			break;
		default: cout<<"invalid choice, BYE :(\n";
	}
	return 0;
}
