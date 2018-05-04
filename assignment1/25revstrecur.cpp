#include<iostream>
#include<string.h>
using namespace std;
void reverseSt(char s[],int n)
{
      static int i=0;
      if(i>=n-1-i)
            return;
      char t=s[i];
      s[i]=s[n-i-1];
      s[n-i-1]=t;
      i++;
      reverseSt(s,n);
}
int main()
{
      char str[100];
      //char* str=b;
      cout<<"Enter a string\n";
      cin.getline(str,100);
      reverseSt(str,strlen(str));
      cout<<str;
      cout<<"\n";
      return 0;
}
