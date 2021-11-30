#include<stdio.h>
int sum_arr(int a[],int size)
{
	int i,sum=0;
	for(i=0;i<size;i++)
	{
		sum=sum+a[i];
	}
	return sum;
}
 int main()
 {
 	int i,size,a[100];
 	printf("enter the size of array");
 	scanf("%d",&size);
 	printf("enter the elements of array");
 	
 	//inpit array from the user.
 	for(i=0;i<size;i++)
 	{
 		scanf("%d",&a[i]);
	 }
	 printf("the sum is %d",sum_arr(a,size));
	 return 0;
 }
 
