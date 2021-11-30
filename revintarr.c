#include<stdio.h>
int main()
{
	int a[5];
	int i;
	printf("enter five integer number \n");
	for(i=0;i<5;i++)
	scanf("%d",&a[i]);
	printf("array elements are :\n");
	for(i=4;i>=0;i--)
	printf("%d\n",a[i]);
	return 0;
}


