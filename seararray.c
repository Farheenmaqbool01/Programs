#include<stdio.h>
int main()
{
	int a[10]={9,2,7,20,1,25,3,22,30,32};
	int i,s,flag=0;
	printf("enter   elements to be searched");
	scanf("%d",&s);
	for(i=0;i<10;i++)
	{
		if(s==a[i])
		{
		flag=1;
		printf("elements found at %d th location",i+1);
		break;
}
	}
	
	   if (flag==0)
	{
		printf("elements not found");
	}
	
}
