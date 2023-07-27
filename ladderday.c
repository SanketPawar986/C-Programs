#include<stdio.h>
void main()
{
	int day;
	printf("enter day number:");
	scanf("%d",&day);
	if(day==1)
	{
		printf("sunday");
	}
	else if(day==2)
	{
		printf("monday");
	}
	else if(day==3)
	{
		printf("tuesdy");
	}
	else if(day==4)
	{
		printf("thursday");
	}
	else if(day==5)
	{
		printf("friday");
	}
	else if(day==6)
	{
		printf("saturday");
	}
	else
	{
		printf("inalid day");
	}
}
