#include<iostream>
using namespace std;
int main()
{
  cout<<"Hello human, let's play a game.\n";
  cout<<"There are 21 matchsticks.You can pick 1,2,3 or 4 matchsticks at a time. Whoever picks the last stick loses the game.\n";
  cout<<"Best of luck!\n";
  int m=21,player=1,ch=0;
  while(m>1)
  {
    if(player==1)
    {
      cout<<"\nPlease enter number of matchsticks to pick\n";
      cin>>ch;
      if(ch<1 || ch>4)
      {
        cout<<"\ninvalid move,\n";
        continue;
      }
      m=m-ch;
    }
    else
    {
      ch=5-ch;
      cout<<"\nComputer picked "<<ch<<" matchsticks\n";
      m=m-ch;
    }
    player*=-1;
    cout<<"\n"<<m<<" matchsticks left\n";
  }
  if(player==-1)
    cout<<"\nHuman player wins\n";
  else
    cout<<"\nComputer wins\n";
}
