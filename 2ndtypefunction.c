#include<stdio.h>
int maxnumber();
void main()
{
	int w;
	w=maxnumber();
	(w==0)?
	printf("both numbers are equal")
	:
		printf("max=%d",w);
}
int maxnumber()
{
	int a,b,max;
	printf("enter value for a=");
	scanf("%d",&a);
	printf("enter value for b=");
	scanf("%d",&b);
	max=(a==b)?0:(a>b)?a:b;
	return max;
}
