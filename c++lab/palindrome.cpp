#include<iostream>
using namespace std;
int main()
{
	int n,copy,rev=0,d;
	cout<<"Enter a number\n";
	cin>>n;
	copy=n;
	while(copy!=0)
	{
		d=copy%10;
		rev=rev*10+d;
		copy=copy/10;
	}
	if(rev==n)
	 cout<<"The number is palindrome\n";
	else
	 cout<<"The number is not a palindrome\n";
	return 0;
}
