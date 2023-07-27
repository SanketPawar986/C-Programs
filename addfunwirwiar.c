#include<stdio.h>
int add(int a,int b);
void main()
{
	int x,y,z=0;
	printf("enter value for x=");
	scanf("%d",&x);
	printf("enter value for y=");
	scanf("%d",&y);
	z=add(x,y);
	printf("add=%d",z);
}
int add(int a,int b)
{
	int c;
	c=a+b;
	return c;
}
