#include<iostream>
#include<cmath>
using namespace std;
class numtype
{
	private:
		int x;
	public:
		void inputNum()
		{
			cout<<"Enter a number\n";
			cin>>x;
			return;
		}
		int checkPal()
		{
			int cpy=x,rev=0;;
			while(cpy>0)
			{
				rev=rev*10+(cpy%10);
				cpy=cpy/10;
			}
			if(rev==x)
				return 1;
			else
				return 0;
		}
		int checkPerfect()
		{
			int s=0;
			for(int i=1;i<x;i++)
			{
				if(x%i==0)
					s=s+i;
			}
			if(s==x)
			 return 1;
			else
			 return 0;
		}
		int checkArmstrong()
		{
			int c=0,s=0;
			int cp=x;

			while(cp!=0)
			{
				c++;
				cp/=10;
			}
			//cout<<"count="<<c<<endl;
			cp=x;
			while(cp!=0)
			{
				int ld=cp%10;
				//cout<<"last digit="<<ld<<endl;
				int p=pow(ld,c);
				//cout<<"power="<<p<<endl;
				//cout<<"count="<<c<<endl;
				s=s+p;
				//cout<<"sum="<<s<<endl;
				cp/=10;
				//cout<<"cp="<<cp<<endl;
			}
			if(s==x)
				return 1;
			else
				return 0;
		}
};
int main()
{
	numtype m;
	m.inputNum();
	if(m.checkPal())
		cout<<"It is a palindrome\n";
	else
		cout<<"It is not a palindrome\n";
	if(m.checkPerfect())
		cout<<"It is a perfect number\n";
	else
		cout<<"It is not a perfect number\n";
	if(m.checkArmstrong())
		cout<<"It is an armstrong number\n";
	else
		cout<<"It is not an armstrong number\n";

	return 0;
}
