#include<string.h>
#include<iostream>
using namespace std;
int main()
{
      int i,j,n;
      char temp[75];
      cout<<"Enter number of names\n";
      cin>>n;
      char** a=(char**)calloc(n,sizeof(char*));
      for(i=0;i<n;i++)
      {
            a[i]=(char*)calloc(75,sizeof(char));
      }
      cout<<"Enter the names\n";
      cin.ignore();
      for(i=0;i<n;i++)
            gets(a[i]);
      for(i=0;i<n;i++)
      {
            for(j=0;j<n-1-i;j++)
            {
                  if(strcmp(a[j],a[j+1])>0)
                  {
                        strcpy(temp,a[j]);
                        strcpy(a[j],a[j+1]);
                        strcpy(a[j+1],temp);
                  }
            }
      }
      cout<<"\nThe names are sorted now..\n\n";
      for(i=0;i<n;i++)
            cout<<a[i]<<"\n";
      return 0;
}
