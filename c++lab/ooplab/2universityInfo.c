#include<stdio.h>
void inputData(char p[],int *y,int *cap)
{
	printf("Enter university name: ");
	gets(p);
	printf("Enter year of establishment: ");
	scanf("%d",y);
	printf("Enter capacity of the university: ");
	scanf("%d",cap);
}
void display(char p[],int *y,int *cap)
{
	printf("University name: %s\n",p);	
	printf("Year of establishment: %d\n",*y);	
	printf("Capacity of the university: %d\n",*cap);
}
int main()
{
	char univName[50];
	int year,capacity;
	printf("Input University details...\n");
	inputData(univName,&year,&capacity);
	printf("\nThe university details as sumbitted are.....\n");
	display(univName,&year,&capacity);
	return 0;
}
