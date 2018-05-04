#include<iostream>
#include<string.h>
using namespace std;
int main()
{
      string st;
      cout<<"Enter the bracket expression\n";
      getline(cin,st);
      char* a=(char*)calloc(st.length(),sizeof(char));
      int k=0;
      for(int i=0;i<st.length();i++)
      {
            char ch=st.at(i);
            if(ch=='('||ch=='['||ch=='{')
            {
                  a[k++]=ch;
            }
            else if(ch==')'||ch==']'||ch=='}')
            {
                  k--;
                  if(k==-1)
                  {
                        cout<<"invalid expression\n";
                        return 0;
                  }
                  if(ch==')' && a[k]!='(')
                  {
                        cout<<"Invalid expression\n";
                        return 0;
                  }
                  if(ch==']' && a[k]!='[')
                  {
                        cout<<"Invalid expression\n";
                        return 0;
                  }
                  if(ch=='}' && a[k]!='{')
                  {
                        cout<<"Invalid expression\n";
                        return 0;
                  }
            }
      }
      if(k==0)
            cout<<"Correct expression\n";
      return 0;
}
