#include<stdio.h>
void minnumber();
void main()
{
	minnumber();
}
void minnumber()
{
	int a,b,min=0;
	printf("enter value for a=");
	scanf("%d",&a);
	printf("enter value for b=");
	scanf("%d",&b);
	min=(a==b)?0:(a<b)?a:b;
	(min==0)?printf("both are equal"):printf("minnumber=%d",min);
}
