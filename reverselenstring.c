#include<stdio.h>
#include<string.h>
int main()
{
	char str[100];
	char i, len=0;
	printf("enter the string");
	gets(str);
	len=strlen(str);
	printf("the reverse string is:");
   for(i=len-1;i>=0;i--)
	
	{
		printf("%c",str[i]);
}
   return 0;
}
