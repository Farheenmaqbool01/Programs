#include<stdio.h>
int prime(int);
int main()
{
	int n,result=0;
	printf("enter the number");
	scanf("%d",&n);
	result=check_prime(n);
	if (result==0)
	printf("%d is prime number");
	else
	printf("%d is not prime");
}
 int prime(int n)
 {
 int i;
 int count;
 for(i=2;i<=n%2;i++)	
 {
 	if (n%i==0)
 	count=1;
 	break;
}

 
		
}
 
