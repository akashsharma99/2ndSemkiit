#include<iostream>
#include<string.h>
using namespace std;
int main()
{
      string st;
      string sp;
      string np;
      string newst;
      cout<<"Enter a long string\n";
      getline(cin,st);
      int len=st.length();
      cout<<len<<'\n';
      cin.ignore();
      cout<<"Enter pattern to search for\n";
      getline(cin,sp);
      cin.ignore();
      cout<<"Enter pattern to replace with\n";
      getline(cin,np);
      int lt=np.length();
      int x=0,i=0,j,k;
      while(i<len)
      {
            j=0;k=i;
            while(j<sp.length()&&st.at(k)==sp.at(j))
            {
                  j++;k++;
            }
            if(j==sp.length())
            {
                  for(int m=0;m<lt;m++)
                  {
                        newst=newst+np.at(m);
                  }
            }
            newst=newst+st.at(i);
      }
      cout<<"The new string is\n";
      cout<<newst<<'\n';
      return 0;
}
