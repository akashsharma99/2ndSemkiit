#include<stdio.h>
int* operation(int a,int b)
{
	int *ans,m;
	*ans=a+b;
	*(ans+1)=a-b;
	*(ans+2)=a*b;
	*(ans+3)=a%b;
	return ans;
}
int main()
{
	int x,y,*p;
	printf("Enter 1st number\n");
	scanf("%d",&x);
	printf("Enter 2nd number\n");
	scanf("%d",&y);
	
	p=operation(x,y);
	printf("%d + %d= %d\n",x,y,*p);
	printf("%d - %d= %d\n",x,y,*(p+1));
	printf("%d * %d= %d\n",x,y,*(p+2));
	printf("%d %c %d= %d\n",x,'%',y,*(p+3));
	return 0;
}
