#include<stdio.h>
int add();
void main()
{
	int w;
	w=add();
	printf("addition=%d",w);
}
int add()
{
	int a,b,c=0;
	printf("enter value for a=");
	scanf("%d",&a);
	printf("enter value for b=");
	scanf("%d",&b);
	c=a+b;
	return c;
}
