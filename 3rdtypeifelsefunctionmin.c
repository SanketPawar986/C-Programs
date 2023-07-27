#include<stdio.h>
void minnumber(int,int);
void main()
{
	int a,b;
	printf("enter value for a=");
	scanf("%d",&a);
    printf("enter value for b=");
	scanf("%d",&b);
	minnumber(a,b);	
}
void minnumber(int w1,int w2)
{
	if(w1==w2)
	{
		printf("both numbers are equal");
	}
	else
	{
		if(w1<w2)
		{
			printf("w1 is min");
		}
		else
		{
			printf("w2 is min");
		}
	}
}
