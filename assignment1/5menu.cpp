#include<iostream>
using namespace std;
int factorial(int x)
{
	if(x==1)
	 return 1;
	return x*factorial(x-1);
}
int prime(int x)
{
	int i;
	if(x==0 || x==1)
		return 0;
	for(i=2;i<x;i++)
	{ 
		if(x%i==0)
	  		return 0;
	}
	return 1;
}
int main()
{
	char ch;int n,m;
	while(1)
	{
	cout<<"Choose your option\n";
	cout<<"a. Factorial of a number\n";
	cout<<"b. Prime or not\n";
	cout<<"c. Odd or Even\n";
	cout<<"d. Exit\n";
	cin>>ch;
	switch(ch)
	{
		case 'a': cout<<"Enter a number\n";
				cin>>n;
				cout<<"factorial is "<<factorial(n)<<"\n";
				break;
		case 'b': cout<<"Enter a number\n";
				cin>>n;
				m=prime(n);
				if(m==1)
					cout<<"This is a prime number\n";
				else
					cout<<"This is not a prime number\n";
				break;
		case 'c': cout<<"Enter a number\n";
				cin>>n;
				if(n%2==0)
					cout<<"This is an even number\n";
				else
					cout<<"This is an odd number\n";
				break;
		case 'd': return 0;
		default: cout<<"wrong choice\n";
	}
	}
}
