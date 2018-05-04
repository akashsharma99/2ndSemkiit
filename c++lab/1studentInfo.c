#include<stdio.h>
#include<malloc.h>
struct student
{
	char name[20];
	int roll;
};
void inputData(struct student *p,int x)
{
	int i=1;
	char flush[5];
	struct student *s=p;
	while(s<p+x)
	{
		gets(flush);
		printf("Enter details of student %d\n",i);
		printf("Name: ");
		gets(s->name);
		printf("Roll: ");
		scanf("%d",&(s->roll));
		s++;i++;
	}
}
void display(struct student *p)
{
	printf("The name of the student is : %s\n",p->name);
	printf("The roll number of student is : %d\n",p->roll);
}
int main()
{
	int n;
	printf("Enter the number of students\n");
	scanf("%d",&n);
	
	struct student *st=(struct student*)calloc(n,sizeof(struct student));
	inputData(st,n);
	printf("\nDetails of 1st student are....\n");
	display(st);
	return 0;	
}
	
