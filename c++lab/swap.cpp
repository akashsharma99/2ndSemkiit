#include<iostream>
using namespace std;
int main()
{
	int a,b;
	cout<<"Enter 1st number\n";
	cin>>a;
	cout<<"Enter 2nd number\n";
	cin>>b;
	a=a^b;
	b=a^b;
	a=a^b;
	cout<<"1st number is "<<a<<"\n";
	cout<<"2nd number is "<<b<<"\n";
	return 0;
}
	
	
