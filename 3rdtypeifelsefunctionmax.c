#include<stdio.h>
void maxnumber(int,int);
void main()
{
	int a,b;
	printf("enter value for a=");
	scanf("%d",&a);
    printf("enter value for b=");
	scanf("%d",&b);
	maxnumber(a,b);	
}
void maxnumber(int w1,int w2)
{
	if(w1==w2)
	{
		printf("both numbers are equal");
	}
	else
	{
		if(w1>w2)
		{
			printf("w1 is max");
		}
		else
		{
			printf("w2 is max");
		}
	}
}
