#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int i,n=0;
	float x=0.0,s=0.0;
	cout<<"Enter value of x\n";
	cin>>x;
	if(x!=0)
	{
		cout<<"How many terms?\n";
		cin>>n;
		for(i=1;i<=n;i++)
		{
			s=s+0.5*pow((x-1)/x,i);
		}
		cout<<"The sum of series is "<<s<<"\n";
	}
	else
	cout<<"value of x cannot be zero\n";
	
	return 0;
}
