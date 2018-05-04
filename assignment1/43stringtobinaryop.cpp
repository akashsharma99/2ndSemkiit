#include<iostream>
#include<string.h>
#include<ctype.h>
using namespace std;
int main()
{
      string s;
      cout<<"Enter the string\n";
      cin>>s;
      int len=s.length();
      if(s.at(len-1)>'9'||s.at(len-1)<'0')
      {
            cout<<"Invalid expression\n";
            return 0;
      }
      s=s+"x";
      len=s.length();
      char* a=(char*)calloc(len,sizeof(char));
      long* expr=(long*)calloc(len,sizeof(long));
      int k=0,j=0;
      for(int i=0;i<len;i++)
      {
            if(isdigit(s.at(i))&& s.at(i)!='0' && s.at(i)!='1')
            {
                  cout<<"Invalid binary number\n";
                  return 0;
            }
            if(s.at(i)=='0'||s.at(i)=='1')
            {
                  a[k++]=s.at(i);
            }
            else
            {
                  a[k]='\0';
                  expr[j++]=strtol(a,NULL,2);
                  if(s.at(i)=='A'||s.at(i)=='a')
                        expr[j++]=-1;
                  else if(s.at(i)=='B'||s.at(i)=='b')
                        expr[j++]=-2;
                  else if(s.at(i)=='C'||s.at(i)=='c')
                        expr[j++]=-3;
                  k=0;
            }
      }
      long sum=expr[0];
      for(int i=1;i<j-1;i++)
      {
            if(expr[i]==-1)
                  sum=sum&expr[i+1];
            else if(expr[i]==-2)
                  sum=sum|expr[i+1];
            else if(expr[i]==-3)
                  sum=sum^expr[i+1];
      }
      cout<<"\ndecimal expression is\n\n";
      for(int i=0;i<j;i++)
      {
            if(expr[i]==-1)
                  cout<<" AND ";
            else if(expr[i]==-2)
                  cout<<" OR ";
            else if(expr[i]==-3)
                  cout<<" XOR ";
            else
                  cout<<expr[i];
      }
      cout<<"\n";
      cout<<"\nValue is =   "<<sum<<"\n";
      return 0;
}
