#include<stdio.h>
int maxnumber();
void main()
{
	int w;
	w=maxnumber();
	if(w==0)
	{
		printf("both are equal");
	}
	else
	{
		printf("max=%d",w);
	}
}
int maxnumber()
{
	int a,b,max;
	printf("enter value for a=");
	scanf("%d",&a);
	printf("enter value for b=");
	scanf("%d",&b);
	if(a==b)
	{
		max=0;
	}
	else
	{
		if(a>b)
		{
			max=a;
		}
		else 
		{
			max=b;
		}
	}
	return max;
}
