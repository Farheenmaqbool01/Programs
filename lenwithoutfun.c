#include<stdio.h>
int main()
{
	char s[50];
	int i, length=0;
	printf("enter the string");
	gets(s);
	for(i=0;s[i]!='\0';i++)
	{
		length++;
	}
	printf("length of %s =%d\n",s,length);
}

