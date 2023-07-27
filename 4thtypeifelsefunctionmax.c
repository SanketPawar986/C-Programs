#include<stdio.h>
int maxnumber(int,int);
void main()
{
	int a,b,c;
	printf("enter value for a=");
	scanf("%d",&a);
	printf("enter value for b=");
	scanf("%d",&b);
	c=maxnumber(a,b);
	if(c==0)
	{
		printf("both are equal");
	}
	else
	{
		printf("max=%d",c);
	}
}
int maxnumber(int w1,int w2)
{
	int max;
	if(w1==w2)
	{
		max=0;
	}
	else 
	{
		if(w1>w2)
		{
			max=w1;
		}
		else
		{
			max=w2;
		}
	}
	return max;
}
