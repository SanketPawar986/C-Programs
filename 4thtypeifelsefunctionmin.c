#include<stdio.h>
int minnumber(int,int);
void main()
{
	int a,b,c;
	printf("enter value for a=");
	scanf("%d",&a);
	printf("enter value for b=");
	scanf("%d",&b);
	c=minnumber(a,b);
	if(c==0)
	{
		printf("both are equal");
	}
	else
	{
		printf("min=%d",c);
	}
}
int minnumber(int w1,int w2)
{
	int min;
	if(w1==w2)
	{
		min=0;
	}
	else 
	{
		if(w1<w2)
		{
			min=w1;
		}
		else
		{
			min=w2;
		}
	}
	return min;
}
