#include<iostream>
#include<cmath>
using namespace std;
float volume(int r)//volume of sphere
{
	return 4/3*3.1415926*r*r*r;
}
float volume(int r,int l)//volume of cylinder
{
	return 3.1415926*r*r*l;
}
float volume(int a,int b,int c)//volume of cuboid
{
	return a*b*c;
}
int main()
{
	int ch,rad,ht;
	cout<<"Enter your choice of shape\n";
	cout<<"1.sphere\n2.cylinder\n3.cuboid\n";
	cin>>ch;
	switch(ch)
	{
		case 1: cout<<"Enter radius\n";
			cin>>rad;
			cout<<"Volume of sphere is: "<<volume(rad)<<'\n';
			break;
		case 2: cout<<"Enter radius of cylinder\n";
			cin>>rad;
			cout<<"Enter height of cylinder\n";
			cin>>ht;
			cout<<"Volume of cylinder is: "<<volume(rad,ht)<<'\n';
			break;
		case 3: cout<<"Enter length\n";
			int aa;cin>>aa;
			cout<<"Enter breadth\n";
			int bb;cin>>bb;
			cout<<"Enter height\n";
			int cc;cin>>cc;
			cout<<"Volume of cuboid is: "<<volume(aa,bb,cc)<<'\n';
			break;
		default: cout<<"invalid choice, BYE :(\n";
	}
	return 0;
}
