#include<iostream>
using namespace std;
inline float s_interest(int pr,int rt,int time)
{
	return (pr*rt*time/100);
}
int main()
{
	int p,r,t;
	cout<<"Enter principle amount\n";
	cin>>p;
	cout<<"Enter rate per annum\n";
	cin>>r;
	cout<<"Enter number of years\n";
	cin>>t;
	cout<<"The simple interest at the end of period is: "<<s_interest(p,r,t)<<'\n';
	return 0;
}
