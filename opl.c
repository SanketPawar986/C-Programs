#include<stdio.h>
void main()
{
	int day;
	printf("enter value for day=");
	scanf("%d",&day);
	switch(day)
	{
		case 1:printf("MONDAY");
		break;
		case 2:printf("TUESDAY");
		break;
		case 3:printf("WEDNESDAY");
		break;
		case 4:printf("THURSDAY");
		break;
		case 5:printf("FRIDAY");
		break;
		case 6:printf("SATURDAY");
		break;
		default:printf("invalid day");
	}
}
