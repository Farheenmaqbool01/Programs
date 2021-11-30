#include<stdio.h>
int main()
{
	int a[10][10],b[10][10];
	int i,j,n,m;
	printf("enter the number of rows amd columns of the matrix");
	scanf("%d %d",&m,&n);
	printf("enter the elements of the matrix row wise");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("tne entire matrix is :\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d",a[i][j]);
		}
		printf("%d\n");
	}
	//finding tronspose:
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			b[j][i]=a[i][j];
		}
	}
	printf("%d\n");
	printf("the tronspose is:\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			printf("%d\t",b[i][j]);
		}
		printf("%d\n");
	}
	
	
}
