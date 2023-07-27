#include<stdio.h>
void main()
{
	int a,b;
	printf("enter value for a=");
	scanf("%d",&a);
	printf("enter value for b=");
	scanf("%d",&b);
	if(a==b)
	{
		printf("both values are equal");
	}
	else
	{
		if(a>b)
		{
			printf("a is maximum");
		}
		else
		{
			printf("a is minimum");
		}
	}
}
