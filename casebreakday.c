#include<stdio.h>
void main()
{
	int day;
	printf("enter value for day=");
	scanf("%d",&day);
	switch(day)
	{
		case 1:printf("your choice is monday");
		break;
		case 2:printf("your choice is tuesday");
		break;
		case 3:printf("your choice is wednesday");
		break;
		case 4:printf("your choice is thursday");
		break;
		case 5:printf("your choice is friday");
		break;
		case 6:printf("your choice is saturday");
		break;
		case 7:printf("your choice is sunday");
		break;
		default:printf("invalid day allow is from 1 to 7");
	}
}
