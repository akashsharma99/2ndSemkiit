#include<iostream>
#include<math.h>
using namespace std;
int digits(int x)
{
	if(x==0)
	 return 0;
	return 1+digits(x/10);
}
int main()
{
	cout<<"Armstrong numbers between 1 and 500 are..\n";
	int i,d,s,n;
	for(i=1;i<=500;i++)
	{
		n=i;
		s=0;
		d=digits(n);
		while(n!=0)
		{
			s=s+pow(n%10,d);
			n=n/10;
		}
		if(s==i)
		 cout<<i<<"\n";
	}
	return 0;
}
