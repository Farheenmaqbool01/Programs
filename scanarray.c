#include<stdio.h>
int main()
{
	int arr[100],i,size;
	printf("enter the size of your array:");
	scanf("%d",&size);
	printf("enter your array:");
	for(i=0;i<size;++i)
	{
		scanf("%d",&arr[i]);
	}
	printf("the array you entered:");
	for(i=0;i<size;++i)
	printf("%d",arr[i]);
}
