#include<iostream>
#include<string>
using namespace std;
int main()
{
       int i;
       string st;
       string s2="";
       cout<<"Enter a string\n";
       getline(cin,st);
       for(i=0;i<st.length();i++)
       {
             if(isalpha(st.at(i)))
             {
                   s2.push_back(st.at(i));
             }
       }
       cout<<"New string is\n"<<s2<<"\n";
       return 0;
}
