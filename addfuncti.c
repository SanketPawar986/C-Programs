#include<stdio.h>
int add();
void main()
{
	int w;
	w=add();
	printf("add=%d",w);
}
int add()
{
	int a,b;
	printf("enter value for a=");
	scanf("%d",&a);
	printf("enter value for b=");
	scanf("%d",&b);
	a+=b;
	return a;
}
