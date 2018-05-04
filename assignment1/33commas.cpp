#include<iostream>
#include<string.h>
using namespace std;
int main()
{
      string text;
      cout<<"Enter a entence\n";
      getline(cin,text);
      int len=text.length();
      cout<<"lengthh "<<len;
      char* st=(char*)calloc(len,sizeof(char));
      int i=0;
      for(i=0;i<len;i++)
      {
            if(text.at(i)==',')
                  st[i]=';';
            else
                  st[i]=text.at(i);
      }
      st[i]='\0';
      cout<<"The modified string is....\n";
      cout<<st;
      return 0;
}
