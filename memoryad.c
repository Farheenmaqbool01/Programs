#include<stdio.h>
int main()
{
	int b=10;
	int *p;
	p=&b;
	printf("the memory adress of variable b is %u",p);
	return 0;
}
