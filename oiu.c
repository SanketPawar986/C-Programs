#include<stdio.h>
void main()
{
	int day;
	printf("enter value for day=");
	scanf("%d",&day);
	if(day==1)
	{
		printf("value for day is monday");
	}
 	else if(day==2)
 	{
 		printf("value for day is tuesday");
	 }
	else if(day==3)
	{
		printf("value for day is wednesday");
	}
	else if(day==4)
	{
		printf("value for day is thursday");
	}
	else if(day==5)
	{
		printf("value for day is friday");
	}
	else if(day==6)
	{
		printf("value for day is saturday");
	}
	else if(day==7)
	{
		printf("value for day is sunday");
	}
	else
	{
		printf("allow day is from 1 to 7");
	}
}
