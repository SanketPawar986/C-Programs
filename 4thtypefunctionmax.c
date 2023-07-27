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
	(c==0)?
	printf("both numbers are equal")
	:
		printf("maxnumber=%d",c);
}
int maxnumber(int w1,int w2)
{
	int max=0;
	max=(w1==w2)?0:(w1>w2)?w1:w2;
	return max;
}
