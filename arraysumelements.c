#include<stdio.h>
int main()
{
	int a[10];
	int i,n,sum;
	printf("enter the size of array");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
  for(i=0;i<n;i++)
{
	sum=sum+a[i];
}
printf("sum of elements of array is %d",sum);
return 0;
}
