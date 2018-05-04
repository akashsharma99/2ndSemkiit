#include<iostream>
#include<malloc.h>
using namespace std;
int main()
{
	int n,i,key,high,low,mid,flag=0;
	int *k=&key;
	cout<<"Enter size of arrray\n";
	cin>>n;
	high=n-1;
	low=0;
	
	int *a=(int*)calloc(n,sizeof(int));
	int *p=a;
	cout<<"Enter "<<n<<" numbers in increasing order\n";
	for(;p<a+n;p++)
	{
		cin>>*p;
	}
	cout<<"Enter a number to find\n";
	cin>>*k;
	p=a;
	while(high>=low)
	{
		mid=(high+low)/2;
		if(*(p+mid)==*k)
		{
			flag=1;
			break;
		}
		else if(*(p+mid)>*k)
		{
			high=mid-1;
		}
		else
		{
			low=mid+1;
		}
		
	}
	if(flag==1)
		cout<<"The number is found at position "<<mid+1<<"\n";
	else
		cout<<"The number is not present in the array\n";
}
