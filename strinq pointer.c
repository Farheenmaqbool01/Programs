#include<stdio.h>
int main()
{
	char str[50],*p,i;
	p=str;
	printf("enter your string");
	gets(str);
	printf("the string you entered:");
	while(*p!='\0')
	printf("%c",*p++);
}
