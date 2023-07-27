#include<stdio.h>
int minnumber();
void main()
{
	int w;
	w=minnumber();
	(w==0)?
	printf("both numbers are equal")
	:
		printf("min=%d",w);
}
int minnumber()
{
	int a,b,min;
	printf("enter value for a=");
	scanf("%d",&a);
	printf("enter value for b=");
	scanf("%d",&b);
	min=(a==b)?0:(a<b)?a:b;
	return min;
}
