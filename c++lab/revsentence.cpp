#include<iostream>
#include<malloc.h>
using namespace std;
int main()
{
	char s[250];
	cout<<"Enter a sentence\n";
	char ch;
	int i=0,c=0,k=0;
	cin.getline(s,250);
	char**rev=(char**)calloc(250,sizeof(char*));
	char w[50];
	for(i=0;;i++)
	{
		if(s[i]==' '||s[i]=='\n')
		{
			**rev=*w;
			rev++;
			k=0;
			c++;
		}
		else
		{
			w[k]=s[i];
			k++;
		}
	}
	char **p;
	for(p=rev+c;p>=rev;p--)
		cout<<**p<<" ";
	return 0;
}
	
