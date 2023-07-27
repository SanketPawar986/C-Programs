#include<stdio.h>
void main()
{
	int choice;
	printf("enter any choice=");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:printf("idli");
		break;
		case 2:printf("sambhar");
		break;
		case 3:printf("vadapav");
		break;
		case 4:printf("dosa");
		break;
		case 5:printf("chinese");
		break;
		default:printf("invalid choice from 1 to 5");
	 } 
}
