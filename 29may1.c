#include<stdio.h>

int main()
{
	char a[100],b[100];
	printf("enter string=");
	gets(a);
	strcpy(b,a);
	strrev(b);
	if(strcmp(a,b)==0)
	{
		printf("this string is palindrom");
	}
	else
	{
			printf("this string is not palindrom");	
	}
}
