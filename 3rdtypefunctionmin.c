#include<stdio.h>
void minnumber(int ,int );
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
	int min=0;
	min=(w1==w2)?0:(w1<w2)?w1:w2;
	(min==0)?
	printf("both numbers are equal")
	:
		printf("minnumber=%d",min);
}
