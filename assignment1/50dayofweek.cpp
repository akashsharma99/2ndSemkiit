#include<iostream>
using namespace std;
int main()
{
      int mm,yy,d=0,leap=0,n,k=1,i,j;
      cout<<"Enter day in dd format\n";
      cin>>d;
      cout<<"Enter month in mm format\n";
      cin>>mm;
      cout<<"Enter year in yyyy format\n";
      cin>>yy;
      if(mm<1||mm>12||yy<1)
      {
            cout<<"Invalid input\n";
            return 0;
      }
      if(yy%100==0)//checking for leap year
      {
            if(yy%400==0)
                  leap=1;
      }
      else
      {
            if(yy%4==0)
                  leap=1;
      }
      //number of days in that month
      if(mm==1||mm==3||mm==5||mm==7||mm==8||mm==10||mm==12)
            n=31;
      else if(mm==4||mm==6||mm==9||mm==11)
            n=30;
      else
      {
            if(leap==1)
                  n=29;
            else
                  n=28;
      }
      if(d>n || d<1)
      {
            cout<<"Invalid date\n";
            return 0;
      }
      d=d+6-(((yy/100)%4)*2);
      d=d+(yy%100);
      d=d+(yy%100)/4;
      switch(mm)
      {
            case 1:     //month="January";
                        if(leap==1)
                              d=d+6;
                        else
                              d=d+0;
                        break;
            case 2:     if(leap==1)
                              d=d+2;
                        else
                              d=d+3;
                        break;
            case 3:
            case 11:    d=d+3;
                        break;
            case 4:
            case 7:     d=d+6;
                        break;
            case 5:     d=d+1;
                        break;
            case 6:     d=d+4;
                        break;
            case 8:     d=d+2;
                        break;
            case 9:
            case 12:    d=d+5;
                        break;
            /*case 10:    d=d+0;
                        break;*/
      }//end of month value switch
      d=d%7;
      switch(d)
      {
            case 0: cout<<"Sunday\n";break;
            case 1: cout<<"Monday\n";break;
            case 2: cout<<"Tuesday\n";break;
            case 3: cout<<"Wednesday\n";break;
            case 4: cout<<"Thursday\n";break;
            case 5: cout<<"Friday\n";break;
            case 6: cout<<"Saturday\n";break;
            default:cout<<"day error logic failed\n";
      }
      return 0;
}

      //Now we will print the calender
      /*for(i=0;i<6;i++)
      {
            for(int j=0;j<7;j++)
            {
                  if(k==1 && j==d)
                  {
                        cout<<"  "<<k<<"  ";
                        k++;
                  }
                  else if(k>1 && k<=9)
                  {
                        cout<<"  "<<k<<"  ";
                        k++;
                  }
                  else if(k>=10 && k<=n)
                  {
                        cout<<" "<<k<<"  ";
                        k++;
                  }
                  else
                   cout<<"     ";
            }
            cout<<"\n";
      }*/
