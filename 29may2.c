#include<stdio.h>

int main()
{
	char a[100],b[100];
	
	printf("enter the usrname=");
	gets(a);
	printf("enter the password=");
	gets(b);
	if(strcmp(a,"hardii")==0)
	{
		if(strcmp(b,"hardii@510@")==0)
		{
			printf("user successfully logging");
		}
		else
		{
			printf("password entered is invaild");
		}
	}
	else
	{
			printf("username entered is invaild");	
	}
}
