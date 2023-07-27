#include<stdio.h>
int minnumber();
void main()
{
	int w;
	w=minnumber();
	if(w==0)
	{
		printf("both are equal");
	}
	else
	{
		printf("min=%d",w);
	}
}
int minnumber()
{
	int a,b,min;
	printf("enter value for a=");
	scanf("%d",&a);
	printf("enter value for b=");
	scanf("%d",&b);
	if(a==b)
	{
		min=0;
	}
	else
	{
		if(a<b)
		{
			min=a;
		}
		else 
		{
			min=b;
		}
	}
	return min;
}
