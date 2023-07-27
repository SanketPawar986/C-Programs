#include<stdio.h>
void main()
{
	int a,b;
	printf("enter value for a=");
	scanf("%d",&a);
	printf("enter value for b=");
	scanf("%d",&b);
	if(a!=b)
	{
		if(a>b)
		{
			printf("a is maximum");
		}
		else
		{
			printf("b is maximum");
		}
	}
	else
	{
		printf("both numbers are equal");
	}
}
