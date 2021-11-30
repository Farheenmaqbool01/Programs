#include<stdio.h>
int factorial (int);
int main()
{
	int n;
	int result;
	printf("enter the number");
	scanf("%d",&n);
	result=factorial(n);
	printf("the factorial of %d is %d",n,result);
}
  int factorial (int n)
  {
  	if (n>1)
  	return n* factorial(n-1);
  	else
  	return 1;
  	
  }
