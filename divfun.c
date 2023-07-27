#include<stdio.h>
void div(int w1,int w2);
void main()
{
	int a,b;
	printf("enter value for a=");
	scanf("%d",&a);
	printf("enter value for b=");
	scanf("%d",&b);
	div(a,b);
}
void div(int m1,int m2)
{
	int z;
	z=m1/m2;
	printf("division=%d",z);
}
