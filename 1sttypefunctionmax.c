#include<stdio.h>
void maxnumber();
void main()
{
	maxnumber();
}
void maxnumber()
{
	int a,b,max=0;
	printf("enter value for a=");
	scanf("%d",&a);
	printf("enter value for b=");
	scanf("%d",&b);
	max=(a==b)?0:(a>b)?a:b;
		(max==0)?printf("both are equal"):printf("maxnumber=%d",max);
}
