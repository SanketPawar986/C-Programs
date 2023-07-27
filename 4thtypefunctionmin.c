#include<stdio.h>
int minnumber(int ,int );
void main()
{
	int a,b,c;
	printf("enter value for a=");
	scanf("%d",&a);
	printf("enter value for b=");
	scanf("%d",&b);
	c=minnumber(a,b);
	(c==0)?
	printf("both numbers are equal")
	:
		printf("minnumber=%d",c);
}
int minnumber(int w1,int w2)
{
	int min=0;
	min=(w1==w2)?0:(w1<w2)?w1:w2;
	return min;
}
