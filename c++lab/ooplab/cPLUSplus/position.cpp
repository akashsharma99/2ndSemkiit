#include<iostream>
#include<malloc.h>
using namespace std;
int main()
{
	int n,i,k,high,low,mid,flag=0;
	cout<<"Enter size of arrray\n";
	cin>>n;
	high=n-1;
	low=0;
	
	int *a=(int*)calloc(n,sizeof(int));
	cout<<"Enter "<<n<<" numbers in increasing order\n";
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<"Enter a number to find\n";
	cin>>k;
	while(high>=low)
	{
		mid=(high+low)/2;
		if(a[mid]==k)
		{
			flag=1;
			break;
		}
		else if(a[mid]>k)
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
