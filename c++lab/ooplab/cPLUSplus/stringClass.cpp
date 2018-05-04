#include<iostream>
#include<string.h>
using namespace std;
class String
{
	private:
		char st[500];
	public:
		void inputString()
		{
			cout<<"Enter the string\n";
			cin.getline(st,500);
			return;
		}
		void displayString()
		{
			cout<<"The given string is...\n";
			cout<<st<<'\n';
			return;
		}
		int countVowels()
		{
			int c=0;
			for(int i=0;i<strlen(st);i++)
			{
				if(st[i]=='O'||st[i]=='o'||st[i]=='a'||st[i]=='A'||st[i]=='E'||st[i]=='e'||st[i]=='I'||st[i]=='i'||st[i]=='U'||st[i]=='u')
				 c++;
			}
			return c;
		}
};
int main()
{
	String obj;
	obj.inputString();
	obj.displayString();
	cout<<"The number of vowels in the string are: "<<obj.countVowels()<<'\n';
	return 0;
}
