//write a program in c to print the following series upto n numbers.
// 1 1 2 3 5 8 13 21
#include<stdio.h>
int main()
{
	int n,a=0,b=1,c,i;
	printf("enter the numbers of terms...");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("%d\n",a);
		c=a+b;
		a=b;
		b=c;
	}
	
}
