#include<stdio.h>
struct student
{
	int rollno;
	char name[5];
	float marks;
};
     int main()
     {
	struct student s[5];
	int i,n;
	printf("how many students are in class");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("enter rollno,name and marks of students %d",i+1);
		scanf("%d %s %f",&s[i].rollno,&s[i].name,&s[i].marks);
	}
	printf("\n\n\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t %s\t %f\t\n",s[i].rollno,s[i].name,s[i].marks);
	}
	
}
