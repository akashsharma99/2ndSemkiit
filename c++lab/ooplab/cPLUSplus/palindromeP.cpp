#include<iostream>
using namespace std;
int main()
{
	int n,rev=0,d,*n1=&n,*copy,*r=&rev,*dd=&d;
	cout<<"Enter a number\n";
	cin>>n;
	copy=&n;
	while(*copy!=0)
	{
		*dd=*copy%10;
		*r=(*r) * 10 + (*dd);
		*copy=*copy/10;
	}
	if(*r==n)
	 cout<<"The number is palindrome\n";
	else
	 cout<<"The number is not a palindrome\n";
	return 0;
}
	
	
