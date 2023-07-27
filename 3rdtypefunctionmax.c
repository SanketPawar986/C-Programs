#include<stdio.h>
void maxnumber(int ,int);
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
	int max=0;
	max=(w1==w2)?0:(w1>w2)?w1:w2;
	(max==0)?
	printf("both numbers are equal")
	:
		printf("maxnumber=%d",max);
}
